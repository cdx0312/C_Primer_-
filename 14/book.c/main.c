//仅包含一本书的图书目录
#include <stdio.h>
#define MAXTITL 41 //书名的最大长度+1
#define MAXAUTL 31 //作者名的最大长度+1
struct book {   //模板结构:标记为book
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main() {
    struct book library; //将library声明为book类型的变量  编译器会创建一个变量library,
    printf("Please enter the book title.\n");
    gets(library.title);
    printf("Now enter the book author\n");
    scanf("%s", library.author);
    printf("Now enter the book value\n");
    scanf("%f", &library.value);
    printf("%s by %s: $ %.2f\n", library.title, library.author, library.value);
    printf("%s:\"%s\"($%.2f) \n", library.author, library.title, library.value);

    return 0;
}