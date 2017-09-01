

//直角坐标转换成极坐标
#include <stdio.h>

float inner_porduct(float * , float *, int );

int main() {

    float * a[2] ;
    float * b[2] ;
    for (int i = 0; i < 2 ; ++i) {
        a[i] = i;
        b[i] = i+2;
    }
    printf("%f",inner_porduct(a,b,2));

    return 0;
}

float inner_porduct(float * a, float * b, int N){
    float total = 0;
    for (int i = 0; i < N; ++i) {
        total += (a[i]) * (b[i]);
    }
    return total;
}