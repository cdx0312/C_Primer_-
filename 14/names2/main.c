/*************************************************************************************************
 * 指针作为参数的优点有:兼容早期版本,执行速度快,只传递一个单个地址,但是缺乏对数据的保护
 * 把结构作为参数来传递和返回处理的是结构的副本,比较安全,变成风格也更加清晰,缺点是浪费时间和空间
 * 当追求效率时使用结构指针作为参数,当需要保护数据时使用const关键字.传递结构值是处理小型结构的常用方法
 *************************************************************************************************/
/*
 * 如果需要一个结构来存储字符串,请使用字符数组成员,以为字符指针会引起很多麻烦,你不能保证他指向的存储位置是已经初始化或者存在的.
 */


//传递和返回结构
#include <stdio.h>
#include <string.h>

struct namect {
    char first_name[20];
    char last_name[20];
    int letters;
};

struct namect getinfo(void);
struct namect makeinfo(struct namect);
void showinfo(struct namect);

int main() {
    struct namect person;
    person = getinfo();
    person = makeinfo(person);
    showinfo(person);
    return 0;
}

struct namect getinfo(void) {
    struct namect temp;
    printf("Please enter your first name?\n");
    gets(temp.first_name);
    printf("Please enter your last name?\n");
    gets(temp.last_name);
    return temp;
}

struct namect makeinfo(struct namect info) {
    info.letters = strlen(info.first_name) + strlen(info.last_name);
    return info;
}

void showinfo(struct namect info) {
    printf("%s %s, your name has %d letters.\n", info.first_name,info.last_name, info.letters);
}