/*
 * 可变参数:stdarg.h
 * 使用方法: \
 *      1.在函数原型中使用省略号
 *      2.在函数定义中创建一个va_list类型的变量
 *      3.用宏将变量初始化为一个参数列表
 *      4.用宏访问这个参数列表
 *      5.用宏完成清理工作
 */
#include <stdio.h>
#include <stdarg.h>

double sum(int n, ...);   //第一点

int main() {
    double s, t;
    s = sum(3, 1.1, 2.5, 13.3);
    t = sum(6, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1);
    printf("return value for s is %g\n", s);
    printf("return value for t is %g\n", t);
    return 0;
}

double sum(int n, ...) {
    va_list ap;     //第二点
    double tot = 0;
    va_start(ap, n);  //第三点
    for (int i = 0; i < n; ++i) {
        tot += va_arg(ap, double);    //第四点
    }
    va_end(ap);//第五点
    return tot;
}