//支持列表操作函数的实现
// Created by cdx on 17-6-14.
//
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

//局部函数的原型
static void CopyToNode (Item * item, Node * pnode);

//接口函数
//把列表置位空列表
void InitializeList (Node *plist) {
    plist = NULL;
}

//如果列表为空则返回真
bool ListIsEmpty (const Node * plist) {
    if (plist == NULL)
        return true;
    else
        return false;
}

//如果列表已满返回真
bool ListIsFull (const Node * plist) {
    Node * pt;
    bool full;

    pt = (Node *)malloc(sizeof(Node));
    if (pt == NULL)
        full = true;
    else
        full = false;
    free(pt);

    return full;
}

//返回节点数
unsigned int ListItemCount (const Node * plist) {
    unsigned int count = 0;
    Node * pnode = plist;   //设置到列表开始的位置
    while (pnode != NULL) {
        count++;
        pnode = pnode->next;
    }
    return count;
}

//创建存放项目的节点,并把它添加到由plist指向的列表的尾部
bool AddItem (Item * item, Node * plist) {
    Node * pnew;
    Node * scan = plist;

    pnew = (Node *)malloc(sizeof(Node));
    if (pnew = NULL)
        return false;

    CopyToNode(item, pnew);

    pnew->next = NULL;
    if (scan == NULL)
        plist = pnew;
    else {
        while (scan->next != NULL)
            scan = scan->next;
        scan->next = pnew;
    }
    return true;
}

//访问每个节点并对他们分别执行pfun函数
void Traverse (const Node * plist, void (* pfun)(Item item)) {
    Node * pnode = plist;
    while (pnode != NULL) {
        (* pfun) (pnode->item);
        pnode = pnode->next;
    }
}

//释放由malloc()分配的内存,把列表指针设置为Null
void EmptyTheList(Node * plist) {
    Node * psave;
    while (plist != NULL) {
        psave = plist->next;
        free(plist);
        plist = psave;
    }
}

//局部函数定义,把一个项目复制到一个节点中去
static void CopyToNode (Item * item, Node * pnode) {
    pnode->item = *item;
}