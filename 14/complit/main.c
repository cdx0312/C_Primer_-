//复合文字,可以创建一个被用来作为函数参数或者赋值给另一个结构的参数
//例如(struct book) {"THe thing", "Flodor", 6.99}
#include <stdio.h>
#define MAXTITLE 41
#define MAXAUTHOR 31

struct book {
    char title[MAXTITLE];
    char author[MAXAUTHOR];
    float value;
};

int main() {
    struct book readfirst;
    int score;

    printf("Enter test score: ");
    scanf("%d", &score);

    if (score >= 84)
        readfirst = (struct book) {
                "Crime and Punishment",
                "Fyodor Dostoyevsky",
                9.99
        };
    else
        readfirst = (struct book) {
                "Mr. Bouncy's Nice Hat",
                "Fred Winsome",
                5.99
        };
    printf("Your assigned reading :\n");
    printf("%s by %s :$%.2f\n", readfirst.title,readfirst.author,readfirst.value);

    return 0;
}