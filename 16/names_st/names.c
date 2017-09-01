/*
 * 文件包含:#include
 * 预处理器发现#define之后,就会寻找后跟的文件名并把这个文件的内容
 * 包含到文件中去,被包含文件的文本将替换源代码中的#define指令.和你
 * 把被包含文件中的全部内容键入到源文件中的特定位置一样.
 *
 * 两种形式: #include<stdio> #include main.h"\
 * 尖括号表示在一个或多个标准系统目录中寻找文件,双引号表示在当前目录/指定目录中寻找文件
 *
 * 包含大型头文件并不一定显著增加程序的大小,很多情况下,头文件的内容是
 * 编译器产生最终代码所需的信息,而不是加到最终代码里的具体语句
 */
#include <stdio.h>
#include "names.h"

void get_names(names * pn) {
    int i;
    printf("Please enter your first name: ");
    fgets(pn->first, SLEN, stdin);
    i = 0;
    while (pn->first[i] != '\n' && pn->first[i] != '\0')
        i++;
    if (pn->first[i] == '\n')
        pn->first[i] == '\0';
    else
        while (getchar() != '\n')
            continue;

    printf("Please enter your last name: ");
    fgets(pn->last, SLEN, stdin);
    i = 0;
    while (pn->last[i] != '\n' && pn->last[i] != '\0')
        i++;
    if (pn->last[i] == '\n')
        pn->last[i] == '\0';
    else
        while (getchar() != '\n')
            continue;
}

void show_names(const names * pn) {
    printf("%s%s \n",pn->first, pn->last);
}
