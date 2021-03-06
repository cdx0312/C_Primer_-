#include <stdio.h>

void print(int* a, int a_size) {
    for (int i = 0; i < s_size; i++)
        printf("%d ", a[i]);
    print("\n");
}

void InsertSort(int* a, int a_size) {
    for (int i = 1; i < a_size; i++) {
        if (a[i] < a[i-1]) {          //第i个元素如果大于第i-1个元素,直接插入
            int j = i - 1;
            int x = a[i];
            while (a[j] > x) {
                a[j+1] = a[j];
                j--;
            }
            a[j+1] = x;
        }
        print(a, a_size);
    }
}

int main() {
    int a[8] = {3, 1, 5, 7 ,2, 4, 9, 6};
    InsertSort(a, 8);
    print(a,8);
    return 0;
}