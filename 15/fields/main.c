/*
 * 位字段也可以进行位操作,位字段由一个结构声明,该结构为每个字段提供标签,并决定字段宽度.
 * unsigned int作为位字段结构的基本布局单元,,也就是32位
 */

//定义和使用字段

#include <stdio.h>
/* 是否透明和是否可见*/
#define YES 1
#define NO 0
/* 边框线样式 */
#define SOLID 0
#define DOTTED 1
#define DASHED 2
/* 三原色 */
#define BLUE 4
#define GREEN 2
#define RED 1
/* 混合颜色 */
#define BLACK 0
#define YELLOW (RED | GREEN)  //3
#define MAGENTA (RED | BLUE)  //5
#define CYAN (GREEN | BLUE)   //6
#define WHITE (RED | GREEN | BLUE)

const char * colors[8] = {"black", "red", "green", "yellow",
                          "blue", "magenta", "cyan", "white"};

struct box_props {
    unsigned int opaque           : 1;
    unsigned int fill_color       : 3;
    unsigned int                  : 4;
    unsigned int show_border      : 1;
    unsigned int border_color     : 3;
    unsigned int border_style     : 2;
    unsigned int                  : 2;
};

void show_settings (const struct box_props *pb);

//struct {
//    unsigned int autfd: 1;
//    unsigned int bldfc: 1;
//    unsigned int undln: 1;
//    unsigned int itals: 1;
//} prnt;   //定义了prnt包含四个1位字段,



int main() {
    //创建和初始化box_props
    struct box_props box = {YES, YELLOW, YES, GREEN, DASHED};

    printf("Original box settings:\n");
    show_settings(&box);

    box.opaque = NO;
    box.fill_color = WHITE;
    box.border_color = MAGENTA;
    box.border_style = SOLID;
    printf("\n\nModified box settings:\n\n");
    show_settings(&box);

    return 0;
}

void show_settings(const struct box_props * pb) {
    printf("Box is %s.\n", pb->opaque == YES ? "opaque" : "transparent");
    printf("The fill color is %s.\n", colors[pb->fill_color]);
    printf("Border %s.\n", pb->show_border == YES ? "shown" : "not shown");
    printf("The border color is %s.\n", colors[pb->border_color]);
    printf("The border style is  ");
    switch (pb->border_style){
        case SOLID : printf("solid.\n");
            break;
        case DOTTED: printf("dotted.\n");
            break;
        case DASHED: printf("dashed.\n");
            break;
        default    : printf("unknown type.\n");
    }
}