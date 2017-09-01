#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int get_int(void);
bool bad_limits(int begin, int end, int low, int high);
double sum_squares(int a, int b);
void display (char ch, int lines, int width);
char get_choice(void);
char get_first(void);
void count(void);

int main() {
    //重复输入,直到文件的结尾
//    int ch;
//
//    while ((ch = getchar()) != EOF)
//        putchar(ch);

    //打开一个文件并显示其内容
//    int ch;
//    FILE * fp;
//    char filename[50];
//
//    printf("enter the name of file: ");
//    scanf("%s", filename);
//    fp = fopen(filename,"r");
//    if (fp == NULL){
//        printf("Failed to open the file: ");
//        exit(1);
//    }
//    while ((ch = getc(fp)) != EOF)
//        putchar(ch);
//    fclose(fp);

    //一个低效且错误的猜测程序
//    int guess = 1;
//    char response;
//    printf("pick an integer from 1 to 100. I will try to guess it.\n"
//                   "Responsed with a y if my guess is right and with \n"
//                   "an n if it s wrong \n"
//                   "Uh....is your number %d? \n", guess);
//    while ((response = getchar() != 'y')){
//        if (response == 'n'){
//            printf("Well then is it %d?\n", ++guess);
//        } else {
//            printf("sorry I understand only y or n\n");
//        }
//        while (getchar() != '\n')
//            continue;
//    }
//    printf("I knew I could do it.\n");

    //按行和列打印字符
//    int ch;
//    int rows, cols;
//
//    printf("enter a character and two integers:\n");
//    while ((ch = getchar()) != '\n'){
//        if (scanf("%d %d ", &rows, &cols) != 2){
//            break;
//        }
//        display(ch, rows, cols);
//        while (getchar() != '\n'){
//            continue;
//        }
//        printf("enter another character and two integers:\n enter q to quit.\n");
//    }
//    printf("Bye!");

    //计算平方和
//    const int MIN = -1000;
//    const int MAX = 1000;
//    int start, stop;
//    double answer;
//
//    printf("this program computes the sum of the squares of integers in a range.\n");
//    printf("the lower bound should not be less than -1000 and the upper bound should not be more than 1000\n");
//    printf("enter the limits (enter 0 for both limits to quit) \n");
//    printf("lower limits: ");
//    start = get_int();
//    printf("upper limits: ");
//    stop = get_int();
//
//    while (start != 0 || stop != 0) {
//        if (bad_limits(start,stop, MIN, MAX)) {
//            printf("please try again:");
//        } else {
//            answer = sum_squares(start,stop);
//            printf("the sum of squares of the integers from %d to %d is %g\n", start, stop, answer);
//        }
//        printf("lower limits: ");
//        start = get_int();
//        printf("upper limits: ");
//        stop = get_int();
//    }
//    printf("Done\n");

    //菜单选项
    int choice;

    while ((choice = get_choice()) != 'q') {
        switch (choice) {
            case 'a': printf("Buy low, sell high.\n");
                      break;
            case 'b': putchar('\a');
                      break;
            case 'c': count();
                      break;
            default:  printf("Program erroe! \n");
                      break;
        }
    }
    printf("Bye!\n");
    return 0;
}
//
void display(char ch, int lines, int width){
    int row, col;
    for (row = 1; row <= lines; row++){
        for (col = 1; col <= width; col++){
            putchar(ch);
        }
        putchar('\n');
    }
}

int get_int(void){
    int input;
    char ch;

    while (scanf("%d", &input) != 1){
        while (ch = getchar() != '\n'){
            putchar(ch);
        }
        printf("is not an integer.\n please enter an integer value, such as 25, -178 or 3: ");
    }
    return input;
}

double sum_squares(int a, int b){
    double total = 0;

    for (int i = a; i <= b ; i++) {
        total += i*i;
    }
    return total;
}

bool bad_limits(int begin, int end, int low, int high) {
    bool not_good = false;

    if (begin > end) {
        printf("%d isn't smaller than %d.\n", begin, end);
        not_good = true;
    }

    if (begin < low || end < low) {
        printf("values must be %d or greater.\n", low);
        not_good = true;
    }

    if (begin > high || end > high) {
        printf("values must be %d or less.\n", high);
        not_good = true;
    }

    return not_good;
}

void count(void) {
    int n;

    printf("Count how far? enter an integer: \n");
    n = get_int();
    for (int j = 1; j <= n ; j++) {
        printf("%d\n", j);
    }
    while (getchar() != '\n') {
        continue;
    }
}

char get_choice(void) {
    int ch;

    printf("enter the letter of your choice: \n");
    printf("a. advice       b. bell\n");
    printf("c. count        q. quit\n");
    ch = get_first();
    while (ch < 'a' || ch > 'd' && ch != 'q') {
        printf("please response with a, b, c or q \n");
        ch = get_first();
    }
    return ch;
}

char get_first(void) {
    int ch;
    ch = getchar();
    while (getchar() != '\n')
        continue;
    return ch;
}


