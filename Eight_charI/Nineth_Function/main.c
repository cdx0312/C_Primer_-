#include <stdio.h>
#include <string.h>
#define NAME "GIGATHINK, INC. "
#define ADDRESS "101 Megapolis Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '
#define MONTH 12
void starbar (void);     //声明函数原型,告知编译器函数的类型
void show_n_char(char ch, int num);
int imin(int n,int m);
void up_and_down(int);
long fact(int n);
long rfact(int n);
void to_binary(unsigned long n);
long fibonacci (int n);
void mikado (int n);
void interchange (int * u, int * v);
int main( ) {
//    starbar();           //函数调用,执行函数
//    printf("%s\n", NAME);
//    printf("%s\n", ADDRESS);
//    printf("%s\n", PLACE);
//    starbar();
//    int spaces;
//
//    show_n_char('*', WIDTH);
//    putchar('\n');
//    show_n_char(SPACE, 12);
//    printf("%s\n", NAME);
//    spaces = (WIDTH - strlen(ADDRESS)) / 2 ;
//    show_n_char(SPACE, spaces);
//    printf("%s\n", ADDRESS);
//    show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2);
//    printf("%s\n", PLACE);
//    show_n_char('*', WIDTH);
//    putchar('\n');

    //找出两个整数中较小的一个
//    int evil1, evil2;
//
//    printf("enter a pair of integers (q to quit): \n");
//    while (scanf("%d %d", &evil1, &evil2) == 2) {
//        printf("the lesser of %d and %d is %d. \n", evil1, evil2, imin(evil1,evil2));
//        printf("enter a pair of integers (q to quit):\n");
//    }
//    printf("Bye!");

    //递归举例  recursion
//    up_and_down(1);

    //使用循环和递归计算阶乘
//    int num;
//
//    printf("this program calculates factorials.\n");
//    printf("Enter a value in the range 0-12 (q to quit): \n");
//    while (scanf("%d", &num) == 1) {
//        if (num < 0 || num > 12)
//            printf("input number must be in 0-12.\n");
//        else{
//            printf("loop: %d factorial = %ld\n", num, fact(num));
//            printf("recursion: %d factorial = %ld", num, rfact(num));
//        }
//        printf("Enter a value in the range 0-12 (q to quit): \n");
//
//    }

    //以二进制形式输出整数
//    unsigned long num;
//    printf("enter an integer (q to quit): \n");
//    while (scanf("%ul", &num) == 1) {
//        printf("Binary equivalent: ");
//        to_binary(num);
//        putchar('\n');
//        printf("enter an integer (q to quit): \n");
//    }
//    printf("Done \n");

    //查看变量的存储地址
//    int pooh = 2, bah = 5;
//
//    printf("In main(), pooh = %d and &pool = %p\n", pooh, &pooh);
//    printf("In main(), bah = %d and &bah = %p\n", bah, &bah);
//    mikado(pooh);

    //交换函数的第一个版本, 存在问题,函数改变的是内部局部变量的值,无法改变面main中xy的值,从而打印的是相同的函数.需要
    //使用指针,指针是一个数值为地址的变量,
//    int x = 5, y = 10;
//    printf("Originally x = %d and y = %d.\n", x, y);
//    interchange(&x, &y);
//    printf("Now x = %d and y = %d.\n", x, y);

    //数组声明
//    float candy[365];
//    char code[12];
//    int states[50];
//    //数组初始化
//    int powers[8] = {1,2,3,4,5,6,7,8};
//
//    //打印每月的天数
//    int days[MONTH] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//    int index;
//
//    for (index = 0; index < MONTH; index++)
//        printf("Month %d has %2d days.\n",index+1,days[index]);

    //

    return 0;
}

void starbar (void) {    //函数定义,定义函数的具体功能
    for (int count = 1; count <= WIDTH ; count++) {
        putchar('*');
    }
    putchar('\n');
}

void show_n_char(char ch, int num) {
    for (int i = 0; i <= num ; i++) {
        putchar(ch);
    }
}

int imin(int n, int m) {
    return (n > m) ? m : n;
}

void up_and_down (int n) {
    printf("Level %d: n location %p \n", n, &n);
    if (n < 4) {
        up_and_down(n+1);
    }
    printf("Level %d: n location %p\n", n, &n);
}

long fact(int num) {
    long i;
    for (i = 1; num > 1 ; num--) {
        i *= num;
    }
    return i;
}

long rfact(int num){
    long ans;
    if (num > 0)
        ans = num * rfact(num -1);
    else
        ans = 1;
    return ans;
}

void to_binary(unsigned long num) {
    int r;
    r = num % 2;
    if (num >= 2)
        to_binary(num / 2);
    putchar('0' + r);
}

long fibonacci(int n) {
    if (n > 2)
        return fibonacci(n - 1) + fibonacci(n - 2);
    else
        return 1;
}

void mikado (int bah) {
    int pooh = 10;

    printf("In mikado(), pooh = %d and &pool = %p\n", pooh, &pooh);
    printf("In mikado(), bah = %d and &bah = %p\n", bah, &bah);
}

void interchange(int * u, int * v) {
    int temp;

    temp = *u;
    *u = *v;
    *v = temp;
}
