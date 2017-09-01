/*
 * 诊断库,assert.h支持的用于辅助调试程序的小型库.由宏assert()构成,该宏接受整数表达式作为参数
 * ,表达式为假(非0)则向stderr写一条错误并调用abort()函数终止程序.
 */
#include <stdio.h>
#include <math.h>
#include <assert.h>

int main() {
    double x, y, z;
    puts("enter a pair of numbers (0 to quit): ");
    while (scanf("%lf %lf", &x, &y) == 2 && (x != 0 || y != 0)) {
        z = x*x - y*y;
        assert(z >= 0);  //当z小于0时报错退出
        printf("answer is %f\n", sqrt(z));
        puts("Next pair of numbers: ");
    }
    puts("Done");
    return 0;
}