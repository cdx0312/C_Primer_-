/*
 * 用抽象数据类型方法进行C语言编程包含三个方面:
 *      1.以抽象,通用的方式描述一个类型,包括其操作
 *      2.设计一个函数接口来表示这种新类型
 *      3.编写具体代码以实现这个接口
 *
 *
 * 定义队列抽象数据类型:
 *      1.两个特殊属性,尾部添加和队列头删除,即FIFO
 *      队列的属性为:可保存一个规则的项目序列
 *      队列的操作为:队列置空,确定队列是否为空,队列是否满,队列中项目数,队尾添加, 队列头删除和恢复项目,清空队列
 *
 * 定义队列接口:
 *      queue.h中,typedef工具定义Item, Queue.
 *
 * 实现接口:
 *      1.决定队列使用哪种数据形式,数组?链表?
 */
#include <stdio.h>
#include "queue.h"

int main() {
    Queue line;
    Item temp;
    char ch;

    InitializeQueue(&line);
    puts("Testomg tje queue interface.Type a to add a value,");
    puts("type d to delete a value, and type q to quit.");
    while ((ch=getchar()) != 'q') {
        if (ch != 'a' && ch != 'd')
            continue;
        if (ch == 'a') {
            printf("Integer to add: ");
            scanf("%d", &temp);
            if (!QueueIsFull(&line)) {
                printf("Putting %d into queue\n", temp);
                EnQueue(temp, &line);
            } else {
                puts("Queue is full!");
            }
        } else {
            if (QueueIsEmpty(&line))
                puts("Nothing to delete");
            else {
                DeQueue(&temp, &line);
                printf("Removing %d from queue\n", temp);
            }
        }
        printf("%d items in queue\n", QueueItemCount(&line));
        puts("Type a to add, d to delete, q to quit!");
    }
    EmptyTheQueue(&line);
    puts("bye!");

    return 0;
}