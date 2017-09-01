//随机存取,二进制IO
#include <stdio.h>
#include <stdlib.h>
#define ARSIZE 1000

int main() {
    double numbers[3][9];
    double value;
    const char * file = "A";
    int i;
    int j;
    long pos;
    FILE *iofile;
    if (iofile = fopen(file, "r") == NULL) {
        fprintf(stderr, "Counld not open %s for input.\n", file);
        exit(2);
    }
    //从文件中读取数据
    for (i = 0; i < 3; i++)
        for (j = 0; j < 9; j++)
            numbers[i][j] = getc(iofile);

    fclose(iofile);
    puts("Bye!");


    return 0;
}