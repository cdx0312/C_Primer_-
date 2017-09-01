//嵌套结构的例子
#include <stdio.h>
#define LEN 20

struct names {
    char first[LEN];
    char last[LEN];
};

struct guys {
    struct names handle;
    char favfood[LEN];
    char job[LEN];
    float income;
};

int main() {
    struct guys fellow[2] = {
            {{"Ewen", "Villard"},
            "grilled salmon",
            "personality coach",
            58112.00
            },
            {{"Rodney", "Swillbelly"},
            "triple",
            "tabloid editor",
            232400.00
            }
    };
    struct guys * him;     //创建一个指向结构的指针
    printf("address #1: %p #2: %p\n", &fellow[0], &fellow[1]);
    him = &fellow[0];      //指针指向的地址,,和数组不同,一个结构的名字不是该结构的地址,需要&取其地址
    printf("pointer #1: %p #2: %p\n", him, him + 1);
    //使用指针访问成员的两种方法,him是一个指针,不可以him.income,him->income是一个float类型的数据,
    //*him表示取him指针指向的地址的值,从而得到了一个结构名,可以进行.income
    //注意指针和结构的区别用法,也就是->和.运算符
    printf("him ->income is $ %.2f :(*him).income is $%.2f\n",him->income,(*him).income);
    him++;   //指向下一个结构地址
    printf("him ->favfood is $ %s :him->handle.last is %s\n",him->favfood,him->handle.last);
    return 0;
}