#include <stdio.h>
#include <iso646.h>   //可以用and or not来代替相关的逻辑运算符
#include <ctype.h>
#include <stdbool.h>
#define SPACE ' '
#define RATE1 0.12589
#define RATE2 0.17901
#define RATE3 0.20971
#define BREAK1 360.0
#define BREAK2 680.0
#define BASE1 (RATE1 * BREAK1)
#define BASE2 (BASE1 + RATE2 * (BREAK2 - BREAK1))
#define PERIOD '.'
#define STOP '|'

int main(void){
    //求出温度低于零度的天数的百分比
//    const int FREEZING = 0;
//    float temperature;
//    int cold_days = 0;
//    int all_days = 0;
//
//    printf("Enter the list of daily low temperatures.\n");
//    printf("Use Celsius, and enter q to quit.\n");
//    while (scanf("%f", &temperature) == 1) {
//        all_days++;
//        if (temperature < FREEZING) {
//            cold_days++;
//        }
//    }
//    if (all_days != 0) {
//        printf("%d days total: %.1f%% were below freezing.\n", all_days, 100.0 * (float) cold_days /all_days);
//    }
//    else {
//        printf("No data entered. \n");
//    }
    //getchar() putchar()
//    char ch;
//    while ((ch = getchar()) != '\n'){
//        if (isalpha(ch))
//            putchar(ch+1);
//        else
//            putchar(ch);
//    }
//    putchar(ch);
    //计算用电管理
//    double kwh, bill;
//    printf("Please enter the kwh used.\n");
//    scanf("%lf", &kwh);
//    if (kwh <= BREAK1)
//        bill = RATE1 * kwh;
//    else if (kwh <= BREAK2)
//        bill = BASE1 + (RATE2 * (kwh - BREAK1));
//    else
//        bill = BASE2 + (RATE3 * (kwh - BREAK2));
//    printf("The charge for %.1f kwh is $%1.2f.\n", kwh, bill);
    //计算一个数的约数
//    unsigned long num;
//    unsigned long div;
//    bool isPrime;
//
//    printf("please enter an integer for analysis: ENter q to quit \n");
//    while (scanf("%lu", &num) == 1){
//        for(div = 2, isPrime = true; div * div <= num; div++){
//            if (num % div == 0) {
//                if (div * div != num){
//                    printf("%lu is divisible by %lu and %lu.\n", num, div, num/div);
//                }
//                else{
//                    printf("%lu is divisible by %lu.\n", num, div);
//                }
//                isPrime = false;
//            }
//        }
//        if (isPrime){
//            printf("%lu is prime. \n", num);
//        }
//        printf("Please enter an integer for analysis: enter q to quit.\n");
//    }
//    printf("Bye!\n");
    //使用逻辑与运算符
//    int ch;
//    int charcount = 0;
//
//    while ((ch = getchar()) != PERIOD){
//        if (ch != '"' && ch != '\''){
//            charcount++;
//        }
//    }
//    printf("there are %d non-quote characters.\n", charcount);

    //统计字符 单词 行
//    char c;
//    char prev;
//    long num_chars = 0L;
//    int num_lines = 0;
//    int num_words = 0;
//    int p_lines = 0;
//    bool inword = false;
//
//    printf("Enter text to be analyzed(| to terminate): \n");
//    prev = '\n';
//    while ((c = getchar()) != STOP){
//        num_chars++;
//        if (c == '\n'){
//            num_lines++;
//        }
//        if (!isspace(c) && !inword){
//            inword = true;
//            num_words++;
//        }
//        if (isspace(c) && inword){
//            inword = false;
//        }
//        prev = c;
//    }
//
//    if (prev != '\n'){
//        p_lines = 1;
//    }
//    printf("characters = %ld, words = %d, lines = %d.\n", num_chars,num_words,num_lines);
//    printf("partial lines = %d\n", p_lines);

    //条件运算符?:
//    const int COVERAGE = 200;
//    int sq_feet;
//    int cans;
//
//    printf("enter number of square feet to be painted: \n");
//    while (scanf("%d", &sq_feet) == 1){
//        cans = sq_feet / COVERAGE;
//        cans += ((sq_feet % COVERAGE) == 0) ? 0: 1;
//        printf("you need %d, %s of paint.\n", cans, cans==1?"can":"cans");
//        printf("enter next value(q to quit): \n");
//    }

    //continue用法
//    const float MIN = 0.0f;
//    const float MAX = 100.0f;
//
//    float score;
//    float total = 0.0f;
//    int n = 0;
//    float min = MAX;
//    float max = MIN;
//
//    printf("enter the first score (q to quit): ");
//    while (scanf("%f", &score) == 1){
//        if (score < MIN || score > MAX){
//            printf("%0.1f is an invalid value. Try again:", score);
//            continue;
//        }
//        printf("Accepting %0.1f:\n", score);
//        min = (score < min) ? score : min;
//        max = (score > max) ? score : max;
//        total += score;
//        n++;
//        printf("enter next score (q to quit): ");
//    }
//
//    if(n > 0){
//        printf("average of %d score is %0.1f.\n", n, total / n);
//        printf("Low = %0.1f, high = %0.1f\n", min, max);
//    }
//    else {
//        printf("No valid scores were entered.\n");
//    }

    //switch语句
//    char ch;
//    printf("Give me a letter of the alphabet, and I will give an anumal name\n");
//    printf("beginning with that letter.\n");
//    printf("Please type in a letter; type # to end my act.\n");
//    while((ch = getchar()) != '#') {
//        if (ch == '\n'){
//            continue;
//        }
//        if (islower(ch)){
//            switch (ch) {
//                case 'a':
//                    printf("argali, a wild sheep of Asia\n");
//                    break;
//                case 'b':
//                    printf("babirusa, a wild pig of Malay\n");
//                    break;
//                case 'c':
//                    printf("coati, a racoonlike mammal\n");
//                    break;
//                case 'd':
//                    printf("desman, aquatic, molelike critter\n");
//                    break;
//                case 'e':
//                    printf("echidna, the spiny anteater\n");
//                    break;
//                case 'f':
//                    printf("fisher, brownish marten\n");
//                    break;
//                default:
//                    printf("That's a stumper!\n");
//            }
//        }
//        else {
//            printf("I recognize only lowercase letters.\n");
//        }
//        while (getchar() != '\n'){
//            continue;
//        }
//        printf("please type another letter or a #.\n");
//    }
//    printf("Bye!\n");

    //多重标签
//    char ch;
//    int a_ct, e_ct, i_ct, o_ct, u_ct;
//    a_ct = e_ct = i_ct = o_ct = u_ct;
//
//    printf("enter some text; enter # to quit. \n");
//    while ((ch = getchar()) != '#'){
//        switch (ch){
//            case 'a':
//            case 'A':
//                a_ct++;
//                break;
//            case 'e':
//            case 'E':
//                e_ct++;
//                break;
//            case 'i':
//            case 'I':
//                i_ct++;
//                break;
//            case 'o':
//            case 'O':
//                o_ct++;
//                break;
//            case 'u':
//            case 'U':
//                u_ct++;
//                break;
//            default:
//                break;
//        }
//    }
//    printf("number of vowels:A E I O U\n");
//    printf("                 %d %d %d %d %d\n", a_ct, e_ct, i_ct, o_ct, u_ct);

    //
    return 0;
}