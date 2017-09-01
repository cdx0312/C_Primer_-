//
// Created by cdx on 17-6-14.
//

#ifndef INC_17_3_FILMS3_LIST_H
#define INC_17_3_FILMS3_LIST_H

#include <stdbool.h>
//特定于程序的声明
#define TSIZE 45   //存放电影名的数组大小
typedef struct film {
    char title[TSIZE];
    int rating;
} Item;

//一般类型定义
typedef struct node {
    Item item;
    struct node * next;
} Node;

/*
 * 函数原型
 * 操作: 初始化一个列表
 * 操作前:plist指向一个列表
 * 操作后:该列表为空
 */
void InitializeList(Node * plist);

//操作:确定列表是否为空列表
//操作前:plist指向一个已经初始化的列表
//操作后:如果列表为空则返回true,否则返回false
bool ListIsEmpty(const Node * plist);

//操作: 确定列表是否已经满
//操作前:plist指向一个就已经初始化的列表
//操作后:如果该列表已经满则返回true,否则返回false
bool ListIsFull (const Node * plist);

//操作:确定列表中项目的个数
//操作前:plist指向一个已经初始化的列表
//操作后:返回该列表中项目的个数
unsigned int ListItemCount (const Node * plist);

//操作:在尾部列表添加一个项目
//操作前:item是要被增加到列表中的项目,plist指向一个已经初始化的列表
//操作后:如果可能的话,在俩表尾部添加一个新项目,函数返回true,否则返回false
bool AddItem (Item * item, Node * plist);

//操作:把一个函数总用于列表中的每个项目
//操作前:plist指向一个已经初始化的列表,pfun指向一个函数,该函数接受一个Item参数并且无返回值
//操作后:pfun指向的函数被作用到列表的每个项目一次
void Traverse (const Node * plist, void (* pfun)(Item item));

//操作:释放已分配的内存
//操作前:plist指向一个已经初始化的列表
//操作后:为该列表分配的内存已经被释放并且该列表被置为空列表
void EmptyTheList (Node * plist);


#endif //INC_17_3_FILMS3_LIST_H


