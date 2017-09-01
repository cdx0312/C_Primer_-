/*
 * #define中使用参数,可以创建外形和作用都与函数类似的类函数宏.宏的参数也用圆括号括起来,
 * #define MEAN(X,Y) (((X)+(Y))/2)
 *
 */

//带有参数的宏
#include <stdio.h>
#define SQUARE(X) ((X)*(X))
#define PR(X) printf("The result is %d.\n", X)

int main() {
    int x = 4;
    int z;

    printf("x = %d\n", x);
    z = SQUARE(x);        //4
    printf("Evaluating SQUARE(x): ");
    PR(z);                //16
    z = SQUARE(2);
    printf("Evaluating SQUARE(2): ");
    PR(z);                //4
    printf("Evaluating SQUARE(x+2): ");
    PR(SQUARE(x+2));      //14?   x+2*x+2=14
    printf("Evaluating 100/SQUARE(2):");
    PR(100/SQUARE(2));    //100?  100/2*2=100
    printf("Evaluating SQUARE(++x): ");
    PR(SQUARE(++x));      //36???  ++x * ++x = 36
    printf("After incrementing, x is %x.\n", x);  //6???
/*
 * 程序运行时,函数调用把参数的值传递给函数,而编译前,宏调用把参数的语言符号传递给程序,因此在宏定义中增加括号确定优先级
 * 在宏中不要使用增量或者减量运算符
 */
    return 0;
}