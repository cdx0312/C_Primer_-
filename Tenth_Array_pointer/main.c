#include <stdio.h>

#define MONTH 12
#define YEAR 5
#define SIZE 5
#define ROWS 3
#define COLS 4

int sum(int ar[], int n);
int sump(int * start, int * end);
void show_array(const double ar[], int n);
void mult_array(double ar[], int n, double mult);
void sum_rows (int ar[][COLS], int rows);
void sum_cols (int [][COLS], int);
int sum2d (int (*ar)[COLS], int row);
int sum2dVLA (int rows, int cols, int ar[rows][cols]);

int main() {
    //数组如果未经过初始化,则数组元素的值是不确定的, 当其初始化个数小于数组长度,则未初始化的数组值为0,
    //如果初始化的个数多于数组长度,则报错,但是可以不制定数组长度让其自行匹配初始化长度.
    //指定初始化项目
//    int days[MONTH] = {31, 28, [4] = 31, 30, 31, [1] = 29};
//    int i;
//
//    for (i = 0; i < MONTH; i++)
//        printf("%2d %d\n", i+1, days[i]);
//
//    //数组赋值
//    int counter, evens[SIZE];
//
//    for (counter = 0; counter < SIZE; counter++)
//        evens[counter] = 2 * counter;
//
//    //c不会检查数组越界问题,注意数组的下标的取值
//    //超出数组的边界
//    const int LENGTH = 4;
//    int value = 44;
//    int attr[SIZE];
//    int value2 = 88;
//
//    printf("value1 = %d, value2 = %d\n", value, value2);
//    for (i = 0; i < SIZE; i++)
//        attr[i] = 2 * i + 1;
//    for (i = -1; i < 7; i++)
//        printf("%2d %d\n", i, attr[i]);
//    printf("value1 = %d, value2 = %d\n", value, value2);

    //针对若干年的降水量数据,计算年降水平均量,以及月降水平均量
//    const float rain[YEAR] [MONTH] = {
//        {4.3,4.3,4.6,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
//        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
//        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
//        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
//        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
//    };
//
//    int year, month;
//    float subtot, total;
//
//    printf(" YEAR    RAINFALL (inches) \n");
//    for (year = 0, total = 0; year < YEAR; year++) {
//        for(month = 0, subtot = 0; month < MONTH; month++){
//            subtot += rain[year][month];
//        }
//        printf("%5d %15.1f\n", 2000+year, subtot);
//        total += subtot;
//    }
//
//    printf("\nThe yearly average is %.1f inches. \n\n", total / YEAR);
//    printf("MONTHLY average: \n\n");
//    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec \n");
//
//    for (month = 0; month < MONTH; month++) {
//        for (year = 0, subtot = 0; year < YEAR; year++) {
//            subtot += rain[year][month];
//        }
//        printf("%4.1f ", subtot / YEAR);
//    }
//    printf("\n");

    //指针加法, 对指针地址加1之后其为数组下一个元素的地址,所以数组必须制定数据类型,才能计算出其指针的指向.
    //指针的数值就是其指向的对象的地址,在指针前运用运算符*可以得到指针所指对象的数值,对指针加1相当于对指针的值加上
    //它指向的对象的字节大小,如short两个字节,double8个字节等...
//    short dates[SIZE];
//    short * pti;
//    short index;
//    double bills[SIZE];
//    double * ptf;
//    pti = dates;
//    ptf = bills;
//    printf("%23s %10s\n", "short", "double");
//    for (index = 0; index < SIZE; index++)
//        printf("pointers + %d: %10p %10p \n", index, pti+index, ptf+index);

    //使用指针符号*
//    int days[MONTH] = {31, 28, [4] = 31, 30, 31, [1] = 29};
//    for (int index = 0; index < MONTH ; ++index) {
//        printf("Month %2d has %d days.\n", index+1, *(days + index));
//    }

    //对一个数组的所有元素求和
    //marbles为一个数组,而ar为一个指针,64位机器的指针大小为8字节.
//    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
//    long answer;
//    answer = sum(marbles, SIZE);
//    printf("The total number of marbles is %ld. \n", answer);
//    printf("the size of marbles is %zd bytes.\n", sizeof marbles);

    //使用指针参数,传入数组的起点和终点两个地址
//    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
//    long answer;
//    answer = sump(marbles, marbles + SIZE);
//    printf("The total number of marbles is %ld. \n", answer);
//    printf("the size of marbles is %zd bytes.\n", sizeof marbles);

    //指针操作
    /**********************************************************************
     * 可以把一个地址赋值给指针 --assignment
     * value-finding/derefercing *可以取出指针指向地址中存储的数值,
     * &可以取出存储指针本身的地址,&为取地址运算符
     * 指针和整数的加减法相当于指针指向的地址加减证书乘以数组的数据类型之后的结果
     * 指针之间的差值为同一个数组两个指针之间相差的元素数,也就是数组数据类型的个数的差值
     * 属于不同数组的指针不建议进行差值运算,结果很可能没有意义.
     ***********************************************************************/
//    int urn[5] = {100, 200, 300, 400, 500};
//    int * ptr1, * ptr2, * ptr3;
//
//    ptr1 = urn;
//    ptr2 = &urn[2];
//
//    printf("pointer value, dereferenced pointer, pointer address:\n");
//    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n ", ptr1, *ptr1, &ptr1);
//
//    ptr3 = ptr1 + 4;
//    printf("\n adding an int to be a pointer: \n");
//    printf("ptrl1 + 4 = %p, *(ptr4 + 3) = %d\n", ptr1+4, *(ptr1+3));
//    ptr1++;
//    printf("\nvalues after ptr1++\n");
//    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
//
//    ptr2--;
//    printf("\nvalues after ptr2--\n");
//    printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);
//
//    --ptr1;
//    ++ptr2;
//    printf("\nPointers reset to original values: \n");
//    printf("ptr2 = %p, ptr1 = %p\n", ptr2, ptr1);
//    printf("\nsubtracting one pointer from another: \n");
//    printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %d\n", ptr2, ptr1, ptr2 - ptr1);
//
//    printf("\nsubtracting an int from an pointer:\n");
//    printf("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3 -2);

    //处理数组的函数
//    double dip[SIZE] = {20.0, 17.66, 8.2, 15.3, 22.22};
//
//    printf("the original dip array: \n");
//    show_array(dip, SIZE);
//    mult_array(dip, SIZE, 2.5);
//    printf("the dip array after calling mult_array(): \n");
//    show_array(dip, SIZE);

    /*************************************************************
     * 指针和多维数组
     * 定义一个二维整数数组int zippo[4][2],zippo指向两个整数大小的地址,zippo[0]指向一个整数大小的地址
     * 两个指针指向的数组起点相同,则两者相等.
     * 对数组加1, zippo+1 和 zippo[0]+1结果不同,zippo是地址的地址, zippo[0]是地址, zippo[0][0]是数组值.
     **************************************************************/

//    int zippo [4] [2] = {
//            {2, 4},
//            {6, 8},
//            {1, 3},
//            {5, 7}
//    };
//
//    printf("  zippo = %p, zippo + 1 = %p \n", zippo, zippo + 1);    //zippo指针指向的位置,8个字节
//    printf("  zippo[0] = %p, zippo[0] + 1 = %p \n", zippo[0], zippo[0] + 1);//zippo[0]指针指向的位置,4个字节
//    printf("  *zippo = %p, *zippo + 1 = %p \n", *zippo, *zippo + 1);  //zippo指针指向位置的值,也就是zippo[0]指针指向的位置
//    printf("zippo[0][0] = %d \n", zippo[0][0]);
//    printf("  *zippo[0] = %d\n", *zippo[0]);  //zippo[0]指向的int数组元素的值
//    printf("  **zippo = %d\n", **zippo);      //zippo指向的zippo[0]指向的int数组元素的值
//    printf("zippo[2][1] = %d \n", zippo[2][1]);
//    printf("*(*(zippo + 2) + 1) = %d\n", *(*(zippo + 2) + 1) ); //3

    //不同数据类型的指针之间不能相互赋值
    //处理二维数组的函数,,处理多维数组时,除了最左边的方括号可以留空之外,其他都需要填充数值,
    // 因为收首方括号表示这是一个指针,其他方括号描述指针所指对象的数据类型.
//    int junk[ROWS][COLS] = {
//            {2,4,6,8},
//            {3,5,7,9},
//            {12,10,8,6}
//    };
//
//    sum_rows(junk, ROWS);
//    sum_cols(junk, ROWS);
//
//    printf("sum of all elements = %d\n", sum2d(junk,ROWS));

    //变长数组必须是自动存储类的,必须在函数内部或者作为函数参量声明,并且声明时不可以进行初始化
//    int i, j;
//    int rs = 3;
//    int cs = 10;
//    int junk[ROWS][COLS] = {
//            {2,4,6,8},
//            {3,5,7,9},
//            {12,10,8,6}
//    };
//
//    int morejunk[ROWS-1][COLS+2] = {
//            {20,30,40,50,60,70},
//            {5,6,7,8,9,10}
//    };
//
//    int varr[rs][cs];
//
//    for (i = 0; i < rs; i++)
//        for (j = 0; j < cs; j++)
//            varr[i][j] = i * j + j;
//
//    printf("3*4 array\n");
//    printf("sum of all elements = %d\n", sum2dVLA(ROWS,COLS,junk));
//
//    printf("2*6 array\n");
//    printf("sum of all elements = %d\n", sum2dVLA(ROWS-1,COLS+2,morejunk));
//
//    printf("3*10 VLA\n");
//    printf("sum of all elements = %d\n", sum2dVLA(rs,cs,varr));

    int total1,total2,total3;
    int *pt1;
    int (*pt2)[COLS];         //创建一个指向包含4个int的数组的指针的指针

    pt1 = (int [2]) {10, 20}; //创建一个指向两个int的数组的指针,
    pt2 = (int [2][COLS]) { {1,2,3,-9}, {4,5,6,-8}};

    total1 = sum(pt1, 2);
    total2 = sum2d(pt2,2);
    total3 = sum((int []) {4,4,4,5,5,5},6);
    printf("%d%d%d",total1,total2,total3);
    return 0;

}

int sum(int ar[], int n) {
    int total = 0;

    for (int i = 0; i < n ; ++i) {
        total += ar[i];
    }
    printf("The size of ar is %zd bytes.\n", sizeof ar);

    return total;
}

int sump(int * start, int * end) {
    int total = 0;
    while (start < end) {
        total += *start;
        start++;   //指针向前推进到下一个元素
    }
    return total;
}

void show_array(const double ar[], int n) {
    for (int i = 0; i < n; i++)
        printf("%8.3f ", ar[i]);
    putchar('\n');
}

void mult_array (double ar[], int n, double mult) {
    for(int i = 0; i < n; i++) {
        ar[i] *= mult;
    }
}

void sum_rows (int ar[][COLS],int rows) {
    int r,c,tot;

    for (r = 0; r < rows; r++) {
        tot = 0;
        for (c = 0; c < COLS; c++){
            tot += ar[r][c];
        }
        printf("row %d :sum = %d\n", r, tot);
    }
}

void sum_cols (int ar[][COLS], int rows) {
    int r, c, tot;

    for (c = 0; c < COLS; c++){
        tot = 0;
        for (r = 0; r < rows; r++)
            tot += ar[r][c];
        printf("col %d: sum = %d\n", c, tot);
    }
}

int sum2d (int ar[][COLS], int rows) {
    int tot = 0;
    for (int c = 0; c < COLS ; c++) {
        for (int r = 0; r < rows; r++) {
            tot += ar[r][c];
        }
    }
    return tot;
}

int sum2dVLA(int rows, int cols, int ar[rows][cols]){
    int tot = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            tot += ar[i][j];
        }
    }
    return tot;
}

