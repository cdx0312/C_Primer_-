#include <stdio.h>
#include <math.h>
double power (double n, int p);

int main() {
    //对用户输入的整数求和
//    long num;
//    long sum = 0L;
//    int status;
//
//    printf("Please enter an integer ti be summed.");
//    printf("(q to quit): ");
//    status = scanf("%ld", &num);
//    while (status == 1) {
//        sum += num;
//        printf("Please enter next integer (q to quit): ");
//        status = scanf("%ld", &num);
//    }
//    printf("those integers sum to %ld", sum);
    //浮点数比较
//    const double ANSWER = 3.14159;
//    double response;
//    printf("what is the value of pi?\n");
//    scanf("%lf", &response);
//    while (fabs(response-ANSWER)>0.0001){
//        printf("Try again!\n");
//        scanf("%lf", &response);
//    }
//    printf("close enough!\n");
    //_Bool使用
//    long num;
//    long sum = 0L;
//    _Bool input_is_good;
//    printf("Please enter an integer to be sumed, (q to quit) : \n");
//    input_is_good = (scanf("%ld", &num) == 1);
//    while (input_is_good) {
//        sum += num;
//        printf("Please enter next integer (q to quit): ");
//        input_is_good = (scanf("%ld", &num) == 1);
//    }
//    printf("those integers sum to %ld", sum);
    //计数循环
//    const int NUMBER = 22;
//    int count = 1;
//    while (count <= NUMBER){
//        printf("Be my Valentine%d! \n", count);
//        count++;
//    }
//    for (int count = 1 ; count <= NUMBER ; count++) {
//        printf("Be my Valentine %d\n", count);
//    }
//    for (char ch = 'a';  ch <= 'z' ; ch++) {
//        printf("the ascii value for %c is %d \n", ch, ch);
//    }
    //逗号运算符举例
//    const int FIRST_OZ = 37;
//    const int NEXT_OZ = 23;
//    int ounces, cost;
//    printf(" ounces cost \n");
//    for (ounces=1,cost=FIRST_OZ;ounces <= 16; ounces++, cost += NEXT_OZ) {
//        printf("%5d $%4.2f\n", ounces, cost/100.0);
//    }
    //序列的和
//    int t_ct;
//    double time, x;
//    int limit;

//    printf("enter the number of terms you want: ");
//    scanf("%d", &limit);
//    for (time = 0, x = 1, t_ct = 1; t_ct <= 5; t_ct++, x *= 2.0){
//        time += 1.0 / x;
//        printf("time = %f when term = %d.\n", time, t_ct);
//    }
    //do-while循环
//    const int secret_code = 13;
//    int code_entered;
//
//    do{
//        printf("To enter the triskaidekaphobia therapy club.\n");
//        printf("please enter the secret code number: ");
//        scanf("%d", &code_entered);
//    } while (code_entered != secret_code);
//    printf("Congratulations!");
    //嵌套循环
//    const int ROWS = 10;
//    const char CHARS = 10;
//    int row;
//    char ch;
//
//    for (row = 0; row < ROWS; row++){
//        for (ch = 'A' + row;ch < ('A' + CHARS); ch++) {
//            printf("%c", ch);
//        }
//        printf("\n");
//    }
    //数组
//    const int SIZE = 10;
//    const int PAR = 72;
//    int index, score[SIZE];
//    int sum = 0;
//    float average;
//
//    printf("enter %d golf scores: \n",SIZE);
//    for (index = 0; index < SIZE; index++){
//        scanf("%d", &score[index]);
//    }
//    printf("the scores read in are as follows:");
//    for (index = 0; index < SIZE; index++) {
//        printf("%5d", score[index]);
//        sum += score[index];
//    }
//    printf("\n");
//    average = (float) sum / SIZE;
//    printf("Sum of scores = %d, average = %.2f\n", sum, average);
//    printf("That's a handicap of %.0f.\n", average - PAR);
    //幂函数
    double x, xpow;
    int exp;

    printf("enter a number and the positive integer pow to which \n");
    printf("the number will be raised. Enter q to quit. \n");
    while (scanf("%lf%d", &x, &exp) == 2) {
        xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g.\n", x, exp, xpow);
        printf("enter next pair of number or q to quit.\n");
    }
    printf("Hope you enjoy this power trip!\n");
    return 0;
}

double power (double n, int p) {
    double pow = 1;
    int i;
    for (i = 0; i <= p ; i++) {
        pow *= n;
    }
    return pow;
}