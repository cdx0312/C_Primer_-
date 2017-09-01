//队列接口
// Created by cdx on 17-6-14.
//
#pragma c9x on
#ifndef INC_17_4_QUEUE_QUEUE_H
#define INC_17_4_QUEUE_QUEUE_H

#include <stdbool.h>

//插入Item的类型定义
typedef int Item;

#define MAXQUEUE 10

typedef struct node {  //节点定义
    Item item;
    struct node * next;
} Node;

typedef struct queue {
    Node * front;   //指向队列首的指针
    Node * rear;    //指向队列尾的指针
    int items;      //队列中项目的个数
} Queue;

//操作:初始化队列
//操作前:pq指向一个队列
//操作后:该队列被初始化为空队列
void InitializeQueue (Queue * pq);

//操作:检查队列是否已经满
//操作前:pq指向一个已经初始化的队列
//操作后:如果队列已经满,返回true,否则返回false
bool QueueIsFull (const Queue * pq);

//操作:检查队列是否为空
//操作前:pq指向一个已经初始化的队列
//操作后:如果队列为空,返回true,否则返回false
bool QueueIsEmpty (const Queue * pq);

//操作:确定队列中项目的数量
//操作前:pq指向一个已经初始化的队列
//操作后:返回队列中项目的个数
int QueueItemCount (const Queue * pq);

//操作:向队列尾端添加项目
//操作前:pq指向一个已经初始化的队列,item是要添加的项目
//操作后:如果队列未满,item被添加成功,返回true,否则返回false
bool EnQueue (Item item, Queue *pq);

//操作:从队列首端删除仙姑
//操作前:pq指向一个已经初始化的队列
//操作后:如果队列非空,队列首端的项目被复制到*pitem,并从队列中删除
//      函数返回为true,如果这个操作使队列为空,把队列重置为空队列.
//      如果队列开始时为空,不改变队列返回false
bool DeQueue(Item *pitem, Queue * pq);

//操作:清空队列
//操作前:pq指向一个已经初始化的队列
//操作后:该队列被清空
void EmptyTheQueue (Queue * pq);

#endif //INC_17_4_QUEUE_QUEUE_H
