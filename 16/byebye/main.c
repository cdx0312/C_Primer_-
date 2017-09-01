//exit() atexit()
/*
 * atexit()函数使用函数指针,要使用atexit()时,只需要把退出时要调用的函数地址传递给
 * atexit()就可以,按照先进后出的顺序执行这些函数, main()没有隐式调用exit()
 *
 * exit()执行了atexit()指定的函数后,做一些自身清理工作.
 */
#include <stdio.h>
#include <stdlib.h>
void sign_off(void);
void too_bad(void);

int main() {
    int n;
    atexit(sign_off);   //注册sign_of函数
    puts("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        puts("That is not an integer!");
        atexit(too_bad);  //注册too_bad函数
        exit(EXIT_FAILURE);
    }
    printf("%d is %s.\n", n , (n % 2 == 0) ? "even" : "odd");

    return 0;
}

void sign_off(void) {
    puts("Thus terminates anther magnificent program from");
    puts("SeeSaw Software!");
}

void too_bad(void){
    puts("SeeSaw Software extends its heartfelt condolences");
    puts("to you upon the failure of your program.");
}