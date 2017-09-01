/*
 * #undef指令取消前面的#define定义,前面没有定义,取消也是合法的
 * #define宏的作用域从文件的定义点开始,到文件的结尾或者#undef结束
 *
 * 条件编译
 *      #ifdef MAVIS
 *          #include "horse.h"
 *          #define STABLES 5
 *      #else
 *          #include "cow.h"
 *          #define STABLES 15
 *      #endif
 *
 *      #ifndef SIZE   //防止重定义
 *          #define SIZE 100
 *      #endif
 *
 *      #if SYS == 1
 *      #include "ibm.h"
 *      #endif
 *
 *      #if SYS == 1
 *      #include "ibmpc.h"
 *      #elif SYS == 2
 *      #include "vax,h"
 *      #elif SYS == 3
 *      #include "mac.h"
 *      #else
 *      #include "general.h"
 *      #endif
 *
 * #line 和 #error,#line用于重置由__LINE__和__FILE__宏报告的行号和文件名
 * #line 1000   //行号设置为1000
 * #line 10 "cool.c"  //行号设置为10, 文件名设置为cool.c
 *
 * #error指令使预处理器发出一条错误消息,该消息包含指令中的文本,编译过程应该中断
 * #if __STDC_VERSION__ != 199901L
 *      #error Not C99
 * #endif
 *
 * #pragma 完成将编译器指令置于源代码中,例如#pragma c9x on 来启动对C99的支持
 * _Pragma预处理运算符可以将字符串转换成常规的编译指令
 * _Pragma ("nonstandardtreatmenttypeB on")等价于
 * #pragma nonstandardtreatmenttypeB on
 *
 *
 * 内联函数
 *      函数调用需要花费时间用于建立调用,传递参数,跳转到函数代码段并返回.把函数变为内联函数讲建议编译器尽可能
 *      快速地调用该函数.
 *      编译器看到内联函数声明之后,会用eatline()函数体代替函数调用.
 *      内联函数没有预留给它单独代码块,所以不能返回地址,
 *      内联函数比较短小,很长的函数的调用时间少于执行时间,优化效果有限\
 *      内联函数的定义和对该函数的调用必须在同一个文件内,即具有内部链接,所以
 *      在头文件中放置内联函数,虽然一般不在头文件中放置可执行文件
 *
 */
#include <stdio.h>
#define JUST_CHECKING
#define LIMIT 4

inline void eatline () {  //内联函数的定义/原型
    while (getchar() != '\n')
        continue;
}

int main() {
    int total;

    for (int i = 1; i <= LIMIT; ++i) {
        total += 2 * i * i + 1;
#ifdef JUST_CHECKING
        printf("i = %d, running total = %d\n", i, total);
#endif
    }
    printf("Grand total = %d\n", total);
    printf("%s\n %s\n %d\n %d\n %s\n", __DATE__,__FILE__,__LINE__,__STDC__,__TIME__);
    eatline();   //函数调用
    return 0;
}