/*
 * 结构本身不能含有同类型的结构,但是可以包含指向下一个结构的指针,这是链表的基础
 * 使用结构链表
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TSIZE 45
struct film {
    char title[TSIZE];
    int rating;
    struct film * next;   //指向下一个链表的结构
};

int main() {
    struct film * head = NULL;
    struct film * prev, * current;
    char input[TSIZE];
    //收集并存储信息,
    //1.使用malloc()函数为一个结构分配足够的空间
    //2.存储这个结构的地址
    //3.把正确的信息写入到这个结构中去
    puts("Enter first movie title: ");
    while (gets(input) != NULL && input[0] != '\0') {
        current = (struct film *) malloc(sizeof(struct film));
        if (head == NULL)
            head = current;
        else
            prev->next = current;
        current->next = NULL;
        strcpy(current->title, input);
        puts("Enter your rating<0-10>: ");
        scanf("%d", &current->rating);
        while (getchar() != '\n')
            continue;
        puts("Enter next movie title (empty to quit):" );
        prev = current;
    }
    //打印电影列表,使用current指针来遍历链表
    if (head == NULL)
        puts("No data entered. ");
    else
        puts("Here is the movie list: ");
    current = head;
    while (current != NULL) {
        printf("Movies: %d  Rating: %d\n", current->title, current->rating);
        current = current->next;
    }
    //任务完成,释放内存
    current = head;
    while (current != NULL){
        free(current);
        current = current->next;
    }
    puts("Done!");
    return 0;
}