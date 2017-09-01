/*
 * 枚举类型,可以声明代表整数常亮的符号名称.关键字enum,
 */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//枚举类型声明
enum spectrum {red, orange, yellow, green, blue, violet};
//enum spectrum color;  //color为enum spectrum变量,其值可以为任意一个颜色
const char * colors[] = {"red", "orange", "yellow",
                        "green", "blue", "violet"};
#define LEN 30

int main() {
    char choice[LEN];
    enum spectrum color;
    bool color_is_found = false;

    puts("Enter a color (empty line to quit):");
    while (gets(choice) != NULL && choice[0] != '\0') {
        for (color = red; color <= violet; color++) {
            if (strcmp(choice, colors[color]) == 0) {
                color_is_found = true;
                break;
            }
        }

        if (color_is_found)
            switch (color) {   //for循环选出的整形数color
                case red:
                    puts("Roses are red.");
                    break;
                case orange:
                    puts("Poppies are orange.");
                    break;
                case yellow:
                    puts("Sunflowers are yellow.");
                    break;
                case green :
                    puts("Grass is green");
                    break;
                case blue  :
                    puts("Bluebell are blue");
                    break;
                case violet:
                    puts("Violets are violet.");
                    break;
            }
        else
            printf("I don't know about the color%s.\n", choice);

        color_is_found = false;
        puts("Next color, please(empty line to quit): ");
    }

    puts("Goodbye!");

    return 0;
}