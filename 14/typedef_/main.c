/*
 * typedef和#define类似,可以为某一类型创建你知道的名字,区别如下:
 *       1.typedef给出的符号名称仅限于对类型,而不是对值
 *       2.typedef的解释由编译器,而不是预处理器执行
 *       3.范围有限但是更加灵活
 */
#include <stdio.h>

int main() {
    return 0;

/*
 * C允许使用多于一个的修饰符,* 指针,()函数,[]数组
 *      1.[]和()具有相同的优先级,高于*
 *      2.()和[]都是从左到右结合的
 *      3.[]和()具有相同的优先级,
 */

//声明实例
    int borad[8][8];
    int ** ptr;
    int * risks[10];  //10个指针元素的数组
    int (* rusks)[10]; //一个指向数组的指针
    int * oof[3][4]; //3*4二维数组,数组成员为int 指针
    int (*uuf) [3][4]; //一个指向二维数组的指针
    int (* uof[3])[4]; //
}