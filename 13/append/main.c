//将多个文件的内容追加到一个文件中去
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 1024
#define SLEN 81

void append(FILE *source, FILE *dest);

int main() {
    FILE *fa, *fs;    //fa指向追加文件,fs指向源文件
    int files = 0;
    char file_app[SLEN];
    char file_sou[SLEN];
    puts("Enter name of destination file: ");
    gets(file_app);
    if ((fa = fopen(file_app, "a")) == NULL) {
        fprintf(stderr, "Can't open %s\n", file_app);
        exit(2);
    }
    //创建一个供目的文件使用的1024字节的缓冲区,如果不能创建则返回非零值,程序将终止,
    if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0) {
        fputs("Can't create output buffer\n",stderr);
        exit(3);
    }
    puts("Enter name of first source file (empty line to quit):");
    while (gets(file_sou) && file_sou[0] != '\0') {
        //防止文件追加到自身
        if (strcmp(file_sou,file_app) == 0)
            fputs("can't append file to itself\n", stderr);
        else if ((fs = fopen(file_sou, "r")) == NULL)
            fprintf(stderr, "can't open %s\n", file_sou);
        else {
            if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0) {
                fputs("can't create input buffer\n", stderr);
                continue;
            }
            append(fs, fa);   //完成复制任务
            if (ferror(fs) != 0)
                fprintf(stderr, "error in reading file %s.\n", file_sou);
            if (ferror(fa))
                fprintf(stderr, "error in writing file %s.\n", file_app);
            fclose(fs);
            files++;
            printf("File %s appended.\n", file_sou);
            puts("Next file (empty line to quit):");
        }
    }
    printf("Done. %d files appended.\n", files);
    fclose(fa);

    return 0;
}

void append(FILE *source, FILE *dest) {
    size_t bytes;
    static char temp[BUFSIZE];
    while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
        fwrite(temp, sizeof(char), bytes, dest);
}