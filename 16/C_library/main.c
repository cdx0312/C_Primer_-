/*
 * 访问C库:
 *      自动访问,编译程序即可
 *      文件包含,包含在一个特定的头文件中
 *      库包含,
 */

//直角坐标转换成极坐标
#include <stdio.h>
#include <math.h>
#define SIZE 10

#define RAD_TO_DEC (180/(4 * atan(1)))   //PI = 4 * atan(1) 弧度转换成角度

float inner_product(float * , float *, int );

typedef struct polar_v{
    double magnitude;
    double angle;
} POLAR_V;

typedef struct rect_v{
    double x;
    double y;
} RECT_V;

POLAR_V rect_to_polar (RECT_V);

int main() {
    RECT_V input;
    POLAR_V result;
    int num[SIZE];

    float a[2] = {1,2};
    float b[2] = {3,4};
    printf("%lf",inner_porduct(a,b,2));
//    puts("Enter x,y coordinates; enter q to quit: ");
//    while (scanf("%lf %lf", &input.x, &input.y) == 2) {
//        result = rect_to_polar(input);
//        printf("magnitude = %.2f, angle = %.2f\n", result.magnitude, result.angle);
//    }
//    puts("Bye");

    return 0;
}
//
//POLAR_V rect_to_polar(RECT_V rv) {
//    POLAR_V pv;
//
//    pv.magnitude = sqrt(rv.x * rv.x + rv.y * rv.y);
//    if (pv.magnitude == 0)
//        pv.angle = 0;
//    else
//        pv.angle = RAD_TO_DEC * atan2(rv.y, rv.x);
//    return pv;
//}

float inner_porduct(float * a, float * b, int N){
    double total = 0;
    for (int i = 0; i < N; ++i) {
        total += a[i]*b[i];
    }
    return total;
}