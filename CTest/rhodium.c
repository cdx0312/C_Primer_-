//
// Created by cdx on 17-5-25.
//
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <float.h>
#define DEXSITY 62.4
#define PI 3.14159
#define BEEP 'a'
#define PAGES 336
#define WORDS 65618
#define BLURB "Authentic imitation! "
int main(void) {
//    float weight,volume;
//    int size,letters;
//    char name[40];
//
//    printf("Hi, what's your first name ? \n");
//    scanf("%s", name);
//    printf("%s, what's your weight in pounds?\n", name);
//    scanf("%f", &weight);
//    size = sizeof(name);
//    letters = strlen(name);
//    volume = weight / DEXSITY;
//    printf("Well, %s, your volumn is %2.2f cubic feet.\n", name, volume);
//    printf("Also, your first name has %d letters, \n", letters);
//    printf("and we have %d bytes to store it in.\n", size);

//    float area, circum, radius;
//
//    printf("What's the radius of your pizza?\n");
//    scanf("%f", &radius);
//    area = PI * radius * radius;
//    circum = 2.0 * PI * radius;
//    printf("your basic pizza parameters are as follows: \n");
//    printf("circumference = %1.2f, area = %1.2f\n", circum, area);


//    printf("Biggest int : %d \n", INT_MAX);
//    printf("Smallest unsigned long : %lld \n", LLONG_MIN);
//    printf("One byte = %d bits on this system. \n", CHAR_BIT);
//    printf("Larggest double : %e \n", DBL_MAX );

//    printf("*%d*\n",PAGES);
//    printf("*%2d*\n",PAGES);
//    printf("*%10d*\n", PAGES);
//    printf("*%-10d*", PAGES);

    const double RENT = 3852.99;   //const定义常亮

    printf("*%f*\n", RENT);
    printf("*%e*\n", RENT);
    printf("*%4.2f*\n", RENT);
    printf("*%3.1f*\n", RENT);
    printf("*%10.3f*\n", RENT);
    printf("*%10.3e*\n", RENT);
    printf("*%+4.2f*\n", RENT);
    printf("*%010.2f*\n", RENT);
    //一些格式标志的使用实例
    printf("%x %X %#x\n", 31, 31, 31);
    printf("**%d**% d**% d**", 42, 42, -42);
    printf("**%5d**%5.3d**%05d**%05.3d**\n",6,6,6,6);
    //字符串的格式化
    printf("/%2s/\n", BLURB);
    printf("/%24s/\n", BLURB);
    printf("/%24.5s/\n", BLURB);
    printf("/%-24.5s/\n", BLURB);
    //一些不匹配的整数转换
    short num = PAGES;
    short mnum = -PAGES;

    printf("num as short and unsigned short: %hd, %hu\n", num, num);
    printf("-num as short and unsigned short: %hd, %hu\n", mnum, mnum);
    //0-32767表示正数,32768-65535表示负数,将有符号数用无符号数表示,正数一样,负数65536-其绝对值
    printf("num as int and char: %d %c\n", num, num); //超存储值取余表示
    printf("WORDS as int,short, and char: %d, %hd, %c\n", WORDS,WORDS,WORDS);
    //不匹配的浮点数转换,,,存到栈中,按照参数的数据类型,读取时,按照说明字符大小读取
    float n1 = 3.0;
    double n2 = 3.0;
    int n3 = 2000000000;
    int n4 = 1234567890;
    printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4); //%e期望一个double类型的数字.8字节
    printf("%ld %ld\n", n3, n4);
    printf("%ld %ld %.ld %.ld\n", n1, n2, n3, n4);
    //发现printf的返回值
    int bph2o = 212;
    int rv;

    rv = printf("%d F is water's boiling point.\n", bph2o);
    printf("the printf() function printed %d characters.\n", rv);

    //打印较长的字符串
    printf("Here's one way to print a ");
    printf("long string.\n");
    printf("Here's another way to print a \
long string. \n");
    printf("Here's the newest way to print a "
           "long string.\n");

    //scanf()函数使用&的情况
    int age;
    float assets;
    char pet[30];    //30个字符组成的字符串

    printf("Enter your age, assert, and favorite pet. \n");
//    scanf("%d %f", &age, &assets);
//    scanf("%s", pet);
    printf("%d %.2f %s\n",age, assets, pet);
    //使用可变宽度的输出字段
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;

    printf("What field width?\n");
//    scanf("%d", &width);
    printf("the number is: %*d: \n", width,number);
    printf("Now enter a width and a precision: \n");
//    scanf("%d %d", &width, &precision);
    printf("Weight = %*.*f\n", width,precision,weight);

    //跳过输入的前两个整数
    int n;
    printf("Please enter three intergers: \n");
    scanf("%*d %*d %d", &n);
    printf("The last integer was %d\n", n);

    return 0;


}
