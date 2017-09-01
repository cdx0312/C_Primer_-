/*
 * 抽象数据结构(ADT)
 * 一个类型(type)指定两类信息,一个属性集和一个操作集,比如int的属性是表示他是一个整数值
 * ,因此他拥有证书的属性,允许的算数操作包括+-*等.
 * 定义一个新的 数据类型,首先需要确定村塾数据的方式,提供操作数据的方式,
 * 定义数据实现从具体到抽象的步骤:
 *      1.为类型的属性和可对类型执行的操作提供一个抽象的描述(ADT).
 *      2.开发一个实现该ADT的编程接口.
 *      3.编写代码来实现该接口,
 *
 * 简单列表的接口有两个部分,一部分描述数据如何表示,一部分描述实现ADT操作的函数,使用typedef定义Item类型
 *
 */
#include <stdio.h>
#include <stdlib.h>    //exit()原型
#include "list.h"      //List Item定义

void showmovies(Item item);

int main() {
    Node movies;
    Item temp;

    //初始化
    InitializeList(&movies);
    if (ListIsFull(&movies)) {
        fprintf(stderr, "No memory available, Bye!\n");
        exit(1);
    }

    //收集并储存
    puts("Enter your first movie title: ");
    while (gets(temp.title) != NULL && temp.title[0] != '\0') {
        puts("Enter your rating<0-10> : ");
        scanf("%d", &temp.rating);
        while (getchar() != '\n')
            continue;
        if (AddItem(&temp, &movies) == false){
            fprintf(stderr, "Problems allocating memory\n");
            break;
        }
        if (ListIsFull(&movies)) {
            puts("The list is now full");
            break;
        }
        puts("enter next movie title (empty to quit): ");
    }

    //显示
    if (ListIsEmpty(&movies))
        printf("No data entered.");
    else {
        printf("Here is the movie list: \n");
        Traverse(&movies, showmovies);
    }
    printf("You entered %d movies.\n", ListItemCount(&movies));

    //清除
    EmptyTheList(&movies);
    printf("Done!\n");

    return 0;
}

void showmovies (Item item) {
    printf("Movie: %s    Rating: %d", item.title, item.rating);
}