//向函数传递一个结构数组
/*
 * 可以用数组名把数组中第一个结构的地址传递给函数
 * 可以使用数组的方括号来访问数组中的后续结构
 */
#include <stdio.h>
#define FUNDLEN 50
#define N 2

struct fund {
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum (const struct fund money[], int n);

int main() {
    struct fund jones[N] = {
            {
                    "Garlic-Melon Bank",
                    3024.72,
                    "Lucky's Savings and Loan",
                    9237.11
            },
            {
                    "Honest Jack's Band",
                    3534.28,
                    "Party Time Savings",
                    3203.89
            }
    };

    printf("The Joneses have a total of $%.2f\n", sum(jones,N));

    return 0;
}

double sum (const struct fund money[], int n) {
    double total;
    for (int i = 0; i < N; ++i) {
        total += money[i].bankfund + money[i].savefund;
    }
    return total;
}