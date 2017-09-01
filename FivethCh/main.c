#include <stdio.h>
#include <complex.h>

#define ADJUST 7.64
#define SCALE 0.325
#define SQUARES 64
#define CROP 1E15
#define S_PER_M 60
#define S_PER_H 3600
#define M_PER_K 0.62137
void pound (int n);     //函数声明,函数没有返回值,接受一个int类型的参数
int main() {
    //把一双鞋的尺码转换为英寸
    double shoe, foot;
    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;
    printf("Shoe size(men's) foot length\n");
    printf("%10.1f %15.2f inches \n", shoe, foot);
    //计算多个鞋尺码对应的英寸长度
    printf("Shoe size(men's) foot length\n");
    shoe = 3.0;
    while (shoe < 18.5){
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %10.2f inches \n", shoe, foot);
        shoe += 1.0;
    }
    printf("If the shoe fits, wear it. \n");
    //高尔夫锦标赛积分卡
    int jane, tarzan, cheeta;

    cheeta = tarzan = jane =68;
    printf("                 cheeta tarzan jane\n");
    printf("First round score %4d %4d %6d\n", cheeta, tarzan, jane);
    //加法
    printf("% d\n", 4 + 20);
    //减法
    printf("% d\n", 20 -4);
    //乘法
    int num = 1;
    while (num < 21){
        printf("%4d %6d\n", num, num * num);
        num += 1;
    }
    //指数增长
    double current, total;
    int count = 1;
    total = current = 1.0;
    printf("square grains added total grains fraction of US total \n");
    printf("%4d %13.2e %12.2e %12.2e\n", count,current, total, total/CROP);
    while (count < SQUARES){
        count = count + 1;
        current = 2.0 * current;
        total = total + current;
        printf("%4d %13.2e %12.2e %12.2e\n", count,current, total, total/CROP);
    }
    printf("That's all\n");
    //除法
    printf("integer division :5/4 is %d \n", 5/4);
    printf("integer division :6/3 is %d \n", 6/3);
    printf("integer division :7/4 is %d \n", 7/4);
    printf("floating division:7./4. is %1.2f  \n", 7./4.);
    printf("mixed division: 7./4 is %1.2f \n", 7./4);
    //优先级
    int top, score;
    top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
    printf("top = %d \n", top);
    //sizeof运算符
    int n = 0;
    size_t intsize;
    intsize = sizeof(int); //sizeof 返回size_t类型,size_t为typedef定义的unsigned int unsigned long的别名
    printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n", n, sizeof(n),intsize);
    //取模运算符
    const int SEC_PER_MIN = 60;
    int sec, min, left;
    printf("Convert seconds to minutes and seconds! \n");
    printf("Enter the number of seconds (<=0 to quit): \n");
//    scanf("%d", &sec);
    while (sec>0){
        min = sec / SEC_PER_MIN;
        left = sec % SEC_PER_MIN;
        printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
        printf("Enter next value (<=0 to quit):\n");
//        scanf("%d", &sec);
    }
    printf("Done!\n");
    //++   --   前缀,先改变值在使用,后缀,先使用值,再改变,,,单独使用时,两者相同
    int ultra = 0, super = 0;
    while (super < 5){
        super++;
        ++ultra;
        printf("super = %d, ultra = %d\n", super, ultra);
    }
    //四种类型的语句
    int count1, sum;               //声明语句

    count1 = 0;                    //赋值语句
    sum = 0;
    while (count1++ < 20){         //while循环语句
        sum += count1;
    }

    printf("sum = %d\n", sum);     //函数语句
    //自动类型转换
    char ch;
    int i;
    float f1;

    f1 = i = ch = 'A';
    printf("ch = %c, i = %d, f1 = %2.2f\n", ch, i, f1);
    ch = ch + 1;
    i = f1 + 2 * ch;
    printf("ch = %c, i = %d, f1 = %2.2f\n", ch, i, f1);
    ch = 5212205;
    printf("Now ch = %c\n", ch);

    //定义带有一个参数的函数
    int times = 5;
    char cha = '!';
    float f = 6.0;
    pound(times);
    pound(ch);
    pound((int) f);
    //实例程序
    double distk, distm;    //以公里和英里计算跑过的距离
    double rate;            //以英里每小时计算平均速度
    int minu, seco;
    int time;
    double mtime;
    int mmin, msec;
    printf("this program converts your time for a metric race\n");
    printf("to a time for running a mile and to your average\n");
    printf("speed in miles per hour.\n");
    printf("Please enter, in kilometers, the distance run.\n");
    scanf("%lf", &distk);
    printf("Next enter the time in minutes and seconds.\n");
    printf("Begin by entering the minutes.\n");
    scanf("%d", &minu);
    printf("Now enter the seconds.\n");
    scanf("%d", &seco);
    time = S_PER_M * minu + seco;
    distm = distk * M_PER_K;
    rate = distm / time * S_PER_H;
    mtime = (double) time / distm;
    mmin = (int) mtime / S_PER_M;
    msec = (int) mtime % S_PER_M;
    printf("you ran %1.2f km (%1.2f miles) in %d min, %d sec. \n", distk, distm, minu, seco);
    printf("That pace corresponds to running a mile in %d min", mmin);
    printf("%d sec.\n You average speed was %1.2f mph.\n", msec, rate);
    return 0;
}

void pound(int n){
    while (n-- > 0){
        printf("#");
    }
    printf("\n");
}