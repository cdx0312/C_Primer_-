/*
 * memcpy()和memmove()函数为复制其他类型的数组提供了方便
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 10
void show_array(const int ar[], int n);
int main() {
    int values[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    int targets[SIZE];
    double curious[SIZE/2] = {1.0,2.0,3.0,4.0,5.0};

    puts("memcpy() used: ");
    puts("values (original data): ");

    show_array(values, SIZE);
    memcpy(targets,values,SIZE * sizeof(int));  //memcpy()函数要求目标数组和源数组不能有重合
    puts("targets (copy of values): ");
    show_array(targets,SIZE);

    puts("\n\nUsing memmove() with overlapping ranges: ");
    memmove(values + 2, values, 5 * sizeof(int)); // memmove()使用缓冲区技术,不要求两个数组不重叠.
    puts("values -- elements 0-5 copied to 2-7: ");
    show_array(values, SIZE);

    puts("\n\nUsing memcpy() to copy double to int: ");
    memcpy(targets, curious,(SIZE/2) * sizeof(double));
    puts("targets -- 5 doubles into 10 int positions: ");
    show_array(targets, SIZE);

    return 0;
}

void show_array(const int ar[], int n) {
    for (int i = 0; i < n ; ++i) {
        printf("%d ", ar[i]);
    }
    putchar('\n');
}