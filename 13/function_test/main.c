#include <stdio.h>
#include <stdlib.h>
#define MAX
#define CNTR_Z '\032'
#define SLEN 50

int main() {
//    FILE *fp;
//    char words[MAX];
//
//    if ((fp = fopen("words", "a+")) == NULL) {
//        fprintf(stderr, "Can't open \"words\" file. \n");
//        exit(1);
//    }
//    puts("Enter words to add to the fule: press the enter key at the beginning of a line to terminate.");
//    while (gets(words) != NULL && words[0] != '\0')
//        fprintf(fp, "%s", words);
//    puts("File contents: ");
//    rewind(fp);
//    while (fscanf(fp, "%s", words) == 1)
//        puts(words);
//    if (fclose(fp) != 0)
//        fprintf(stderr, "error closing files\n");
    //fgets() fputs(), fgets()函数接受三个参数,第一个为数组名, 第二个为数组长度,第三个为输入流
    //fputs()函数接受两个参数,第一个为数组名,第二个为输出流
    //显然fgets()函数可以防止内存溢出
//    char line[MAX];
//
//    while (fgets(line,MAX,stdin) != NULL && line[0] != '\n')
//        fputs(line,stdout);

    //反序显示一个文件
    char file[SLEN];
    char ch;
    FILE *fp;
    long count, last;

    puts("Enter the name of the file to be processed: ");
    gets(file);
    if ((fp = fopen(file, "rb")) == NULL) {
        printf("reverse can't open %s\n", file);
        exit(1);
    }
    fseek(fp,0L,SEEK_END);//定位到文件结尾处,第一个参数指向被搜索的文件指针,第二个参数为偏移量,第三个参数为模式标示起点
    last = ftell(fp); //返回文件当前的位置
    for (count = 1L; count <= last; count++) {
        fseek(fp,-count,SEEK_END); //回退
        ch = getc(fp);
        if (ch != CNTR_Z && ch != '\r')
            putchar(ch);
    }
    putchar('\n');
    fclose(fp);
    return 0;
}