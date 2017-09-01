#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MSG "You must have many talents. Tell me some. "
#define LIM 20
#define LINELEN 81
#define DEF "I am a #defined string. "
#define SIZE 81
#define STOP "quit"0
#define LISTSIZE 5
#define WORDS "beast"
#define HALT " "
#define LIMIT 80

void ToUpper (char * string);
int PunctCount (const char * string);
void put1 (const char * string);
int put2 (const char * string);
void fit (char * string, unsigned int size);
void stsrt(char *strings[], int num);

//int main() {
    //字符串是以空字符\o结尾的char数组,字符串属于静态存储类,在程序的整个运行过程中
    //只存储一份.引号的内容作为指向该字符串存储位置的指针.
    //建立,读取,输出字符串
//    char name[LINELEN];
//    char talents[LINELEN];
//    int i;
//    const char m1[40] = "Limit yourself to one line's worth. ";  //初始化一个大小已经确定的char数组,多余空间初始化为\0
//    const char m2[] = "If you can't think of anything, fake it ."; //编译器计算数组大小
//    const char *m3 = "\nEnough about me - what's your name? ";//初始化一个指针
//    const char *mytal[LIM] = {                               //初始化一个字符串指针的数组
//            "Adding numbers swiftly",
//            "Multiplying accurately",
//            "Stashing data",
//            "Following instructions to the letter",
//            "Understanding the C language"
//    };
//
//    printf("Hi, I'm Clyde the computer." "I have my talents.\n");
//    printf("Let me tell you some of them.\n");
//    puts("what were they? Ah, yes, here's a partial list.");
//    for (i = 0; i < LIM; i++)
//        puts(mytal[i]);
//    puts(m3);
//    gets(name);
//    printf("Well, %s, %s\n", name, MSG);
//    printf("%s\n%s\n", m1,m2);
//    gets(talents);
//    puts("Let's see if i've got the list: ");
//    puts(talents);
//    printf("Thanks for the information, %s.\n", name);

    //%s格式输出字符串内容,%p输出一个地址,%c输出字符串第一个字符
//    printf("%s, %p, %c", "We", "are", *"vvspac");

    //初始化一个存放字符串的数组和一个指向字符串的指针的区别
//    char heart[] = "I love Tillie!";   //数组名为常亮
//    char *head = "I love Tillie!";    //指针名为变量
//    //都可以使用数组符号
//    for (int i = 0; i < 6; ++i) {
//        putchar(heart[i]);
//    }
//    printf("\n");
//    for (int i = 0; i < 6; ++i) {
//        putchar(head[i]);
//    }
//    printf("\n");
//    //都可以使用指针加法
//    for (int i = 0; i < 6; ++i) {
//        putchar(*(heart + i));
//    }
//    printf("\n");
//    for (int i = 0; i < 6; ++i) {
//        putchar(*(head + i));
//    }
//    printf("\n");
//    //只有指针可以使用增量运算符,++ --
//    while (*(head) != '\0')
//        putchar(*(head++));
    //用一个字符串数组来初始化一个字符串可以修改其内容,因为其他字符串获取的是其一个拷贝
    //也就是不会影响对其的调用,用一个指针初始化一个字符串原则上使用const修饰,以为程序中
    //可能调用这个字符串的地址是相同的,也就是会造成影响,尽量不要修改.

    //指针和字符串
//    char *mesg = "Don't be a fool! ";
//    char *copy;
//    copy = mesg;
//
//    printf("%s\n",copy);
//    printf("mesg = %s; &mesg = %p; value = %p\n", mesg, &mesg, mesg);
//    printf("copy = %s; &copy = %p; value = %p\n", copy, &copy, copy);

    //读取字符串的函数,scan(),gets(),fgets();gets()函数返回一个指向char的指针,
    //gets()函数不检查预留存储区是否能够容纳实际的数据,多余会溢出到相邻的存储区.
    //
//    const int MAX = 81;
//    char name[MAX];
//    char * ptr;
//
//    printf("Hi, what's your name?\n");
////    gets(name);
//    ptr = fgets(name, MAX, stdin);//三个参数,第一个读取的数组名,第二个数组长度,第三个文件来源
////    printf("Nice name, %s", name);
//    printf("%s? Ah! %s!\n", name, ptr);

    //C用来输出字符串的标准函数,puts(),fputs(),printf().
    //puts()
//    char str1[80] = "An array was initialized to me.";
//    const char * str2 = "A pointer was initialized to me";
//
//    puts("I'm an argument to puts() .");
//    puts(DEF);
//    puts(str1);
//    puts(str2);
//    puts(&str1[5]);
//    puts(str2 + 4);
//    //puts()显示字符串自动在其后添加一个换行符,puts遇到空字符时停止,将双引号中的每个字符看做是地址,字符串的名称也看做是地址
//    //fputs()是gets()面向文件的版本,两者区别在于fputs需要第二个参数来指定要写的文件,并且不会为输入添加换行符.
//    char line[81];
////    while (gets(line))
////        puts(line);
//    while (fgets(line, 81, stdin))
//        fputs(line,stdout);

//    put1("If I'd as much money");
//    put1(" as I could spend, \n");
//    printf("I count %d characters.\n",put2("I never would cry old chairs to mend. "));

    //strlen()函数
//    char mesg[] = "Hold on to your hats, hackers. ";
//
//    puts(mesg);
//    fit(mesg, 7);
//    puts(mesg);
//    puts("Let's look at some more of the string. ");
//    puts(mesg + 8);

    //strcat()函数,两个字符串参数,将第二个字符串的拷贝拼接到第一个字符串的结尾生成一个新的字符串
//    char flower[SIZE];
//    char addon[] = "s smell like old shoes.";
//
//    puts("What is your favourite flower ? ");
//    gets(flower);
//    strcat(flower,addon);
//    puts(flower);
//    puts(addon);

    //strncat(),strcat()函数并不检查第一个数组是否能容纳第二个数组,strncat增加一个参数指定新的字符串长度
//    const int SIZE_NEW = 30;
//    const int BUGSIZE = 13;
//
//    char flower[SIZE_NEW];
//    char addon[] = "s smell like old shoes.";
//    char bug[BUGSIZE];
//    int available;
//
//    puts("what is your favourite flower?");
//    gets(flower);
//    if ((strlen(addon) + strlen(bug)) + 1 <= SIZE_NEW)
//        strcat(flower, addon);
//    puts(flower);
//    puts("what is your favourite bug?");
//    gets(bug);
//    available = BUGSIZE - strlen(bug) - 1;
//    strncat(bug, addon, available);
//    puts(bug);

    //strcmp()函数,比较两个字符串, 比较两个字符数组第一个空字符之前的字符,
//    const char ANSWER[] = "Grant";
//    char try[40];
//
//    puts("who is buried in Grant's tomb?");
//    gets(try);
////    while (try != ANSWER)     //错误,检查的是try和ANSWER两个指针的地址是否相同.
//    while (strcmp(ANSWER,try) != 0)
//    {
//        puts("No, that's wrong.try again");
//        gets(try);
//    }
//    puts("that's right.");
    //strcmp()返回值, 如果第一个字符在字母表中的顺序先于第二个字符则返回负数,否则返回正数,相同则返回0
//    printf("strcmp(\"A\",\"A\") is %d \n\n", strcmp("A","A"));
//    printf("strcmp(\"A\",\"B\") is %d \n\n", strcmp("A","B"));
//    printf("strcmp(\"B\",\"A\") is %d \n\n", strcmp("B","A"));
//    printf("strcmp(\"C\",\"A\") is %d \n\n", strcmp("C","A"));
//    printf("strcmp(\"Z\",\"a\") is %d \n\n", strcmp("Z","a"));
//    printf("strcmp(\"apples\",\"apple\") is %d \n\n", strcmp("apples","apple"));
//    char input[LIM][SIZE];
//    int ct = 0;
//
//    printf("enter up to %d lines (type quit to quit) : \n", LIM);
//    while (ct < LIM && gets(input[ct]) != NULL && strcmp(input[ct],STOP) != 0){
//        ct++;
//
//    }
//    printf("%d strings entered\n", ct);

    //strncmp()函数
//    char * list[LISTSIZE] = {
//            "astronomy","astounding",
//            "astrophysics","ostracize",
//            "asterism"
//    };
//    int count = 0;
//    for (int i = 0; i < LISTSIZE; i++) {
//        if (strncmp(list[i],"astro", 5) == 0){
//            printf("Found: %s\n", list[i]);
//            count++;
//        }
//    }
//    printf("The list contained %d words begining with astro.\n",count);

    //strcpy()/strncpy()函数
//    char qwords[LIM][SIZE];
//    char temp[SIZE];
//    int i = 0;
//
//    printf("Enter %d words beginning with q : \n", LIM);
//    while (i < LIM && gets(temp)) {
////        if (temp[0] != 'q')
//        if (strncmp(temp,"q", 1))
//            printf("%s doesn't begin with q!\n", temp);
//        else {
//            strcpy(qwords[i], temp);
//            i++;
//        }
//    }
//    puts("Here are the words accepted: ");
//    for (int j = 0; j < LIM; ++j) {
//        puts(qwords[j]);
//    }

/******************************************
 * strcpy()接受两个字符串指针参数,指向源字符串的指针可以
 * 是一个已声明的指针,数组名或者字符串常亮,指向目的字符串的
 * 第一个指针应该指向空间足够大的数据对象.
 *
 * strcpy()返回第一个参数的值,也就是第一个字符的地址,当
 * 第一个参数不是指向数组的开始,此时只复制数组的一部分.
 ****************************************** */
//    char * orig = WORDS;
//    char copy[SIZE] = "Be the best that you can be.";
//    char * ps;
//
//    puts(orig);
//    puts(copy);
//    ps = strcpy(copy + 7, orig);
//    puts(copy);
//    puts(ps);
    ////strcpy函数和gets函数一样不检查目标字符串能否容纳源字符串,strncpy()函数需要第三个
//参数来指定最大可复制字符数,比较安全

    //sprint()将结果输出到字符串里面
//    const int MAX = 20;
//    char first[MAX];
//    char last[MAX];
//    char formal[2*MAX + 10];
//    double prize;
//
//    puts("Enter your first name:");
//    gets(first);
//    puts("Enter your last name: ");
//    gets(last);
//    puts("Enter your prize money");
//    scanf("%lf", &prize);
//    sprintf(formal, "%s,%-19s: $%6.2f\n", last,first,prize);
//    puts(formal);

    //字符串排序,对指针进行了排序,而不改变原始数据的顺序
//    char input[LIM][SIZE];
//    char *ptstr[LIM];
//    int ct = 0;
//
//    printf("Input up to %d lines, and I will sort them.\n",LIM);
//    printf("To stop, press the Enter Key at a line's start.\n");
//    while (ct < LIM && gets(input[ct]) != NULL && input[ct][0] != '\0'){
//        ptstr[ct] = input[ct];
//        ct++;
//    }
//    stsrt(ptstr, ct);
//    puts("\nHere's the sorted list: \n");
//    for (int k = 0; k < ct; k++) {
//        puts(ptstr[k]);
//    }

    //修改一个字符串,逐个修改字符串中的字符即可完成
//    char line[LIMIT];
//
//    puts("Please enter a line: ");
//    gets(line);
//    ToUpper(line);
//    puts(line);
//    printf("That line has %d punctuation characters.\n", PunctCount(line));

    //命令行参数,C编译器允许main没有参数或者有两个参数,两个参数时,第一个参数是命令行中的字符串数
    //,其名称一般为argc,第二个参数为一个指向字符串的指针数组,argv,一般来说第一个字符为程序名
int main (int argc, char *argv[]){
//    int count;
//    printf("The command line has %d arguments: \n", argc - 1);
//    for (count = 1; count < argc; count++)
//        printf("%d:%s\n",count, argv[count]);
//    printf("\n");

        int i, times;
        if (argc < 2 || )

    return 0;
}

void put1 (const char * string) {
    while (*string != '\0')
        putchar(*string++);     //指针形式
//    int i = 0;
//    while (string[i] != '/0')
//        putchar(string[i++]);
}

int put2 (const char * string) {
    int count = 0;
    while (*string){
        putchar(*string++);
        count++;
    }  //当其指向空时,退出循环,惯例
    putchar('\n');

    return count;
}

//fit函数讲字符串数组的特定位置修改其字符为空字符
void fit (char * string, unsigned int size) {
    if (strlen(string) > size)
        *(string + size) = '\0';
}

//选择排序,每次循环选择一个最小的值
void stsrt (char *strings[], int num) {
    char *temp;
    int top, seek;
    for (top = 0; top < num - 1; top++){
        for (seek = top +1; seek < num; seek++){
            if (strcmp(strings[top], strings[seek]) > 0) {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
        }
    }
}

void ToUpper (char * string) {
    while (*string) {
        *string = toupper(*string);
        string++;
    }
}

int PunctCount (const char * string) {
    int ct = 0;
    while (*string) {
        if (ispunct(*string))
            ct++;
        string++;
    }
    return ct;
}


