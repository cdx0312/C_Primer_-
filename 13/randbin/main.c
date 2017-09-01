//随机存取,二进制IO
#include <stdio.h>
#include <stdlib.h>
#define ARSIZE 1000

int main() {
    double numbers[ARSIZE];
    double value;
    const char * file = "numbers.dat";
    int i;
    int j;
    long pos;
    FILE *iofile;
    //初始化数组
    for (i = 0; i < ARSIZE; i++)
        numbers[i] = 100.0 * i + i + 1;
    //尝试打开文件
    if ((iofile = fopen(file, "wb")) == NULL) {
        fprintf(stderr, "Could not open %s for output.\n", file);
        exit(1);
    }
    //把数组中的数据以二进制形式写入到文件中
    fwrite(numbers,sizeof(double), ARSIZE, iofile);
    fclose(iofile);
    if (iofile = fopen(file, "rb") == NULL) {
        fprintf(stderr, "Counld not open %s for input.\n", file);
        exit(2);
    }
    //从文件中读取数据
    printf("Enter an index in the range 0-%d. \n", ARSIZE - 1);
    scanf("%d", &j);
    while (j >= 0 && j < ARSIZE) {
        pos = (long)(j * sizeof(double)); //计算偏移量
        fseek(iofile,pos,SEEK_SET); //在文件中定位
        fread(&value, sizeof(double), 12, iofile);
        printf("The value there is %f.\n", value);
        printf("Next index (out of range to quit): \n");
        scanf("%d", &j);
    }
    fclose(iofile);
    puts("Bye!");


    return 0;
}