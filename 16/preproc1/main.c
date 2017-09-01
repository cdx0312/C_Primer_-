/*
 * 编译程序之前,先由预处理器检查程序,讲程序中使用的预处理指令,预处理器用符号缩略语所代表的内容
 * 替换程序中的缩略语.
 * 预处理前的操作
 *      1.编译器首先把源代码中出现的字符映射到源字符集.
 *      2.编译器查找\后紧跟换行符实例并删除这些实例,讲其转成一个逻辑行.
 *      3.编译器将文本划分成预处理的语言符号(token)序列和空白字符及注释序列
 * 明显常亮 #define,作用域为定义位置到文件结尾
 * 每个#define由三个部分组成,第一部分为指令#define自身,第二部分为所选择的缩略语,这些缩略语成为宏(Marco),
 * 代表值的宏被称为类对象宏,第三部分称为替换列表或者主体.
 * 预处理器发现程序中的宏后,会用它的等价替换文本代替宏,称为宏展开
 * 符号常亮的优点:1.记忆值的能力,2.易更改性,3.可移植性
 */

//简单预处理器的例子
#include <stdio.h>
#define TWO 2
#define OW "Consistency is the last refuge of the unimagina \
tive. - Oscar Wilde"
#define FOUR TWO * TWO
#define PX printf("X is %d.\n", x)
#define FMT "X is %d.\n"

int main() {
    int x = TWO;
    PX;
    x = FOUR;
    printf(FMT, x);
    printf("%s\n", OW);
    printf("TWO: OW\n");
    return 0;
}