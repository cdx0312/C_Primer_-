#include <stdio.h>
#define LEN 20

const char * mesg[5] = {
        "   Thank you for the wonderful evening, ",
        "You certainly prove that a ",
        "is a special kind of guy. We must get together",
        "over a delicious ",
        " and have a few laughs"
};
struct names {  //第一个结构
    char first[LEN];
    char last[LEN];
};
struct guy {    //第二个结构
    struct names handle;   //嵌套结构
    char favfood[LEN];
    char job[LEN];
    float income;
};

int main() {
    struct guy fellow = {
            {"Ewen", "Villard"},
            "grilled salmon",
            "personality coach",
            57112.00
    };

    printf("Dear %s,\n\n",fellow.handle.first);
    printf("%s%s.\n",mesg[0], fellow.handle.first);
    printf("%s%s.\n",mesg[1], fellow.job);
    printf("%s\n", mesg[2]);
    printf("%s%s%s",mesg[3],fellow.favfood, mesg[4]);

    if (fellow.income > 150000.0)
        puts("!!");
    else if (fellow.income > 75000.0)
        puts("!");
    else
        puts(".");
    printf("\n%40s%s\n", " ", "See you soon,");
    printf("%40s%s\n", " ", "Shalala");
    return 0;
}