/*
 * 使用queue接口实例
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "queue.h"
#define MIN_PER_HR 60.0

bool newcustomer (double x);   //是否有新顾客到来
Item customrtime (long when);  //设置顾客参量

int main() {
    Queue line;
    Item temp;               //关于新顾客的数据
    int hours;               //模拟的小时数
    int perhour;             //每小时顾客的平均数
    long cycle, cyclelimit;  //循环计数器,计数器的上界
    long turnaways = 0;      //因队列已经满拒绝的人数
    long customers = 0;      //被加入队列的顾客数
    long served = 0;         //得到服务的顾客数
    long sum_line = 0;       //累计的队列长度
    int wait_time = 0;       //从当前到sifmund空闲需要的时间
    double min_per_cust;     //顾客到来的平均间隔时间
    long line_wait = 0;      //队伍累计等待时间

    InitializeQueue(&line);
    srand(time(0));
    puts("Case Study: Sigmund Lander's Advice Booth");
    puts("Enter the number of simulation hours: ");
    scanf("%d", &hours);
    cyclelimit = MIN_PER_HR *hours;
    puts("Enter the average number of customs per hour: ");
    scanf("%d", &perhour);
    min_per_cust = MIN_PER_HR / perhour;

    for (cycle = 0; cycle < cyclelimit; cycle++) {
        if (newcustomer(min_per_cust)) {
            if (QueueIsFull(&line))
                turnaways++;
            else {
                customers++;
                temp = customrtime(cycle);
                EnQueue(temp, &line);
            }
        }

        if (wait_time <= 0 && !QueueIsEmpty(&line)) {
            DeQueue(&temp, &line);
            wait_time = temp.processtime;
            line_wait += cycle - temp.arrive;
            served++;
        }

        if (wait_time > 0)
            wait_time--;
        sum_line += QueueItemCount(&line);
    }

    if (customers > 0) {
        printf("customers accepted: %ld\n", customers);
        printf("customers served:   %ld\n", served);
        printf("turnaways:          %ld\n",turnaways);
        printf("average wait time: %.2f minutes\n", (double)line_wait / served);
        printf("average queue size:%.2f\n", (double)sum_line/cyclelimit);
    } else
        puts("No customers!");

    EmptyTheQueue(&line);
    puts("Bye!");
    return 0;
}

//x是顾客到来的平均间隔,如果这一分钟有客户到来,则返回true
bool newcustomer (double x) {
    if (rand() * x / RAND_MAX < 1)
        return true;
    else
        return false;
}

//when是顾客到来的时间,函数返回一个Item结构,该结构的顾客到来时间为when,
//需要咨询时间设置为一个范围为1-3之间的随机值
Item customrtime(long when) {
    Item cust;

    cust.processtime = rand()%3 + 1;
    cust.arrive = when;

    return cust;
}