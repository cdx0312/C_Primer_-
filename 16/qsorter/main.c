//快速排序法是最有效的排序算法之一,,C使用qsort()实现了快速排序算法
//原型为void qsort(void * base, size_t nmemb, size_t size, int (*compar)(const void *, const void *))
//第一个参数为指向要排序的数组头部的指针,第二个参数为为需要排序的项目数量,第三个参数为数据对象的大小,
// 第四个参数为指向函数的指针,被指向的函数用于确定排序顺序,

#include <stdio.h>
#include <stdlib.h>

#define NUM 40
void fillarray(double ar[], int n);
void showarray(double ar[], int n);
int mycomp(const void * p1, const void * p2);

int main() {
    double vals[NUM];
    fillarray(vals, NUM);
    puts("Random list: ");
    showarray(vals, NUM);
    qsort(vals, NUM, sizeof(double),mycomp);
    puts("\nSorted list: ");
    showarray(vals, NUM);

    return 0;
}

void fillarray(double ar[], int n) {
    for (int index = 0; index < n ; ++index)
        ar[index] = (double)rand()/((double)rand() + 0.1);
}

void showarray(double ar[], int n) {
    for (int index = 0; index < n ; ++index) {
        printf("%9.4f ", ar[index]);
        if (index % 6 == 5)
            putchar('\n');
    }
    putchar('\n');
}

int mycomp(const void * p1, const void * p2) {
    const double * a1 = (const double *) p1;
    const double * a2 = (const double *) p2;    //注意指针的格式转化
    if (*a1 < *a2)
        return -1;
    else if (*a1 == *a2)
        return 0;
    else
        return 1;
}