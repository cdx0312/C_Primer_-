/*
 * 联合union是一个能在同一个存储空间不同存储时间存储不同类型数据的数据结构
 */
#include <stdio.h>

union hold {             //联合模板,,表示hold可以存储一个整形,双精度浮点数,字符数,
    int digit;
    double bigf1;
    char letter;
};

int main() {
    union hold fit;     //联合变量,,,,,,分配8个字节
    union hold save[10];//联合变量的数组  分配80个字节
    union hold * pu;    //指向hold类型变量的指针
    union hold valA;
    valA.letter = 'R';
    union hold valB = valA;   //把一个联合初始化为另一个联合
    union hold valC = {88};   //初始化联合的digit成员
    union hold valD = {.letter='c'};  //制定初始化成员

    return 0;
}