/*
 * 17章,高级数据表示
 * 使用结构数组来存放你一年看过的电影的信息
 * 存在的问题:
 *      1.浪费大量空间,比如电影名字没有四十个字符,
 *      2.5部电影的限制太严格了,不适用
 *      3.movies数组需要的空间大小受到限制,
 *      可以采用指针当做数组名,并且自动分配内存空间
 */
#include <stdio.h>
#define TSIZE 45
#define FMAX 5

struct film {
    char title[TSIZE];
    int rating;
};

int main() {
    struct film movies[FMAX];
    int i = 0;
    int j;

    puts("Enter first film title: ");
    while (i < FMAX && gets(movies[i].title) != NULL && movies[i].title[0] != '\0') {
        puts("Enter your rating <0-10>: ");
        scanf("%d", &movies[i].rating);
        i++;
        while (getchar() != '\n')
            continue;
        puts("Enter next movie title (empty line to quit):");
    }

    if (i == 0)
        puts("No data emtered.");
    else
        puts("here is the movies list: ");

    for (j = 0; j < i; j++)
        printf("Movies: %s Rating: %d\n", movies[j].title, movies[j].rating);
    puts("Bye!");
    return 0;
}