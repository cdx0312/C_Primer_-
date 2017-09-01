#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "diceroll.h"

extern int rand0(void);
extern void srand1(unsigned int x);

void trystat (void);

int units = 0;    //一个外部声明
void critic(void);
void report_count ();
void accumulate(int k);

int count = 0;  //文件作用域,外部链接

int main() {
    //链接,外部链接,内部链接,空链接,,,具有代码块作用域或者函数原型作用域的变量拥有空链接,具有文件作用于的变量可能拥有内部链接或者外部链接.
    //定义中包含了static关键字为内部链接,否则为外部链接
    //存储时期分为静态存储时期和自动存储时期,,,静态存储时期中变量一直存在
    //存储类分为5种,自动,寄存器,具有外部链接的静态,具有内部链接的静态,空链接的静态
//    int n = 10;
//    printf("Initially, n = %d\n", n);
//    for (int n=1 ; n < 3 ; ++n)
//        printf("loop 1 : n = %d\n", n);
//    printf("After loop 1, n = %d\n", n);
//    for (int n = 1; n < 3 ; ++n) {
//        printf("loop 2 index n = %d\n", n);
//        int n = 30;
//        printf("loop 2: n = %d\n", n);
//        n++;
//    }
//    printf("After loop 2, n = %d\n", n);
//    //使用一个局部静态变量,,,静态指的是其存储方式是静态的
//    for (int count = 1; count <= 3 ; ++count) {
//        printf("Here comes iteration %d: \n",count);
//        trystat();
//    }

    //具有外部链接的静态变量,,使用外部变量
//    extern int units;   //可选的二次声明
//    printf("How many pounds to a firkin of butter?\n");
//    scanf("%d", &units);
//    while (units != 56) {
//        critic();
//    }
//    printf("You must have looked it up!\n");

    //各种存储类
//    int value;     //自动变量
//    register int i;//寄存器变量
//    printf("Enter a positive integert (0  to quit):\n");
//    while (scanf("%d", &value) == 1 && value > 0) {
//        ++count;            //使用文件作用域变量
//        for (i = value; i >= 0; i--)
//            accumulate(i);
//        printf("Enter a positive integer (0  to quit): \n");
//    }
//    report_count();

    //外部函数可以被其他文件中的函数调用,静态函数只能在定义他的文件中使用
    //函数一般使用自动的存储类,
//    unsigned seed;
//    printf("Please enter your choice for seed.\n");
//    while (scanf("%u", &seed) == 1) {
//        srand1(seed);
//        for (int count = 0; count < 5 ; ++count) {
//            printf("%hd\n", rand0());
//    }
//        printf("Please enter next seed (q to quit):\n");
//
//    }
//    printf("Done!\n");
//    int dice, roll, sides;
//
//    srand((unsigned int)time(0)); //随机化种子
//    printf("Enter the number of sides per die, 0 to stop.\n");
//    while (scanf("%d", &sides) == 1 && sides > 0) {
//        printf("How many dice? \n");
//        scanf("%d", &dice);
//        roll = roll_n_dice(sides,dice);
//        printf("You have rolled a %d using %d %d-sided dice.\n", roll, dice, sides);
//        printf("How many sides ? Enter 0 to stop. \n");
//    }
//    printf("The rollem() function was called %d times. \n", roll_count);
//    printf("Bye!\n");
    //为数组动态分配存储空间
    double * ptd;
    int max, number;
    int i = 0;

    puts("What is the maximum number of type double entries?");
    scanf("%d", &max);
    ptd = (double * )malloc(max * sizeof(double));
    if (ptd == NULL) {
        puts("Memory allocation failed. Goodbye.");
        exit(EXIT_FAILURE);
    }
    puts("Enter the values (q to quit):");
    while (i < max && scanf("%lf",&ptd[i]) == 1)
        ++i;
    printf("Here are your %d entries: \n", number = i);
    for (i = 0; i < number; i++) {
        printf("%7.2f", ptd[i]);
        if (i % 7 == 6)
            putchar('\n');
    }
    if (i % 7 != 0)
        putchar('\n');
    puts("Done.");
    free(ptd);
    return 0;
}

void trystat(void) {
    int fade = 1;
    static int stay = 1;
    printf("fade = %d and stay = %d\n", fade++, stay++);  //每次打印fade值一样,stay加一,,,局部静态变量.
}

void critic (void) {
    //忽略了二次声明
    printf("No luck, chummy. Try again.\n");
    scanf("%d", &units);
}

void report_count() {
    printf("Loop executed %d times\n", count);
}


/*********************************************************************
 * 总结
 * 存储程序的内存可以用存储时期,作用域和链接来表示
 * 存储时期可以是静态的(程序运行阶段一直存在),动态(代码块分配并退出)的或者是分配的(malloc() free())
 * 作用域决定了哪一部分可以程序可以访问某个数据,
 * 链接描述了某个单元定义的变量可以被链接到哪里去.代码块作用域的变量作为局部变量,具有空链接,具体文件作用域的
 * 变量具有外部链接或者内部链接,
 * C中存在的五种存储类
 * 自动,寄存器,静态空链接,静态外部链接,静态内部链接
 **********************************************************************/