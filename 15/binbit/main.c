//使用位运算显示二进制数值
#include <stdio.h>

char * itobs(int, char *);
void show_bstr(const char *);

int main() {
    char bin_str[8 * sizeof(int) + 1];   //数组存放打印值,
    int number;

    puts("Enter integers and see them in binary.");
    puts("Non-numeric input terminates program.");
    while (scanf("%d", &number) == 1) {
        itobs(number, bin_str);
        printf("%d is ", number);
        show_bstr(bin_str);
        putchar('\n');
    }
    puts("Bye!");

    return 0;
}

char * itobs(int n, char * string) {   //返回地址和传送的地址相同,修改地址内容
    static int size = 8 * sizeof(int);

    for (int i = size - 1; i >= 0 ; i--) {
        string[i] = (01 & n) + '0';    //取n的最后一位的值,转换成ascii码0,1
        n >>= 1;
    }
    string[size] = '\0';

    return string;
}

void show_bstr(const char * string) {
    int i = 0;
    while (string[i]) {
        putchar(string[i]);
        if (++i % 4 == 0 && string[i])
            putchar(' ');
    }
}