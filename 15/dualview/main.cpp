//使用位运算和字段联合来比较
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

//位运算中使用的常亮
#define OPAQUE 0x1
#define FILL_BLUE 0x8
#define FILL_GREEN 0x4
#define FILL_RED 0x2
#define FILL_MASK 0xE
#define BOARDER 0x100
#define BOARDER_BLUE 0x800
#define BOARDER_GREEN 0x400
#define BOARDER_RED 0x200
#define BOARDER_MASK 0xE00
#define B_SOLID 0
#define B_DOTTED 0x1000
#define B_DASHED 0x2000
#define STYLE_MASK 0x3000

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

union Views {
    struct box_props st_view;
    unsigned int ui_view;
};

void show_settings (const struct box_props *pb);
void show_settings1(unsigned int number);
char * itobs(int n, char * ps);  //把short的值以二进制显示出来

int main() {
    //创建和初始化box_props
    union Views box = {{YES, YELLOW, YES, GREEN, DASHED}};
    char bin_str[8 * sizeof(unsigned int) + 1];

    printf("Original box settings:\n");
    show_settings(&box.st_view);
    printf("\n\nBox setting using unsigned int view:\n\n");
    show_settings1(box.ui_view);

    printf("bits are %s\n", itobs(box.ui_view, bin_str));
    box.ui_view &= ~FILL_MASK;
    box.ui_view |= (FILL_BLUE | FILL_GREEN);
    box.ui_view ^= OPAQUE;
    box.ui_view &= ~STYLE_MASK;
    box.ui_view |= BOARDER;
    printf("MOD box settings:\n");
    show_settings(&box.st_view);
    printf("\n\nBox setting using unsigned int view:\n\n");
    show_settings1(box.ui_view);
    printf("bits are %s\n", itobs(box.ui_view, bin_str));


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

void show_settings1(unsigned int number) {
    printf("box is %s.\n", (number & OPAQUE) == OPAQUE ? "opaque" : "transparent");
    printf("The fill color is %s.\n", colors[(number >> 1) & 07]);
    printf("Border %s.\n", (number & BOARDER)  == BOARDER ? "shown" : "not shown");
    printf("The border style is  ");
    switch (number & STYLE_MASK){
        case B_SOLID : printf("solid.\n");
            break;
        case B_DOTTED: printf("dotted.\n");
            break;
        case B_DASHED: printf("dashed.\n");
            break;
        default    : printf("unknown type.\n");
    }
    printf("The boarder color is %s.\n", colors[(number >> 9) & 07]);
}

char * itobs(int n, char * ps) {
    static int size = 8 * sizeof(unsigned int);
    for (int i = size - 1; i >= 0 ; i--, n >>= 1) {
        ps[i] = (01 & n) + '0';
    }
    ps[size] = '\0';
    return ps;
}