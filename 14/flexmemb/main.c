/*
 * 伸缩型数组成员新特性,可以声明最后一个成员是一个具有特殊属性的数组的结构,
 * 比如不存在或者不立即存在,并且可以编写适当的代码使用这个伸缩型数组成员,
 * 声明一个伸缩型数组成员的规则为:1,伸缩型数组成员必须为最后一个数组成员
 * 2,结构中必须至少有一个其他成员, 3,伸缩型数组和普通数组一样声明,方括号内为空
*/

//伸缩型数组成员
#include <stdio.h>
#include <stdlib.h>

struct flex {
    int count;
    double average;
    double score[]; //伸缩型数组成员
};

void showFlex (const struct flex * prt);

int main() {
    struct flex * pf1, * pf2;
    int n = 5;
    int tot = 0.0;

    //为结构和数组分配存储空间
    pf1 = malloc(sizeof(struct flex) + n * sizeof(double));
    pf1->count = n;
    for (int i = 0; i < n; ++i) {
        pf1->score[i] = 20.0 - i;
        tot += pf1->score[i];
    }
    pf1->average = tot / n;
    showFlex(pf1);

    n = 9;
    tot = 0.0;
    pf2 = malloc(sizeof(struct flex) + n * sizeof(double));
    pf2->count = n;
    for (int i = 0; i < n; ++i) {
        pf2->score[i] = 20.0 - i;
        tot += pf2->score[i];
    }
    pf2->average = tot / n;
    showFlex(pf2);

    return 0;
}

void showFlex(const struct flex * ptr) {
    printf("Scores: ");
    for (int i = 0; i < ptr->count; ++i) {
        printf("%g ", ptr->score[i]);
    }
    printf("\nAverage: %g\n", ptr->average);
}