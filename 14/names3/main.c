//使用指针和malloc()函数,,,,有分配内存则必须有释放,否则造成内存泄露
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct namect {
    char * first_name;
    char * last_name;
    int letters;
};

void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(const struct namect *);
void cleanup (struct namect *);

int main() {
    struct namect person;
    getinfo(&person);
    makeinfo(&person);
    showinfo(&person);
    cleanup(&person);
    return 0;
}

void getinfo(struct namect * pst) {
    char temp[81];                     //创建字符数组
    printf("Please enter your first name?\n");
    gets(temp);                        //存储输入到字符数组
    pst->first_name = (char *)malloc(strlen(temp) + 1);   //为firstname分配内存
    strcpy(pst->first_name, temp);      //讲temp字符数组赋值到first_name中去
    printf("Please enter your last name?\n");
    gets(temp);
    pst->last_name = (char *)malloc(strlen(temp) + 1);
    strcpy(pst->last_name,temp);
}

void makeinfo(struct namect * info) {
    info->letters = strlen(info->first_name) + strlen(info->last_name);
}

void showinfo(const struct namect * info) {
    printf("%s %s, your name has %d letters.\n", info->first_name,info->last_name, info->letters);
}

void cleanup(struct namect * pst) {
    free(pst->first_name);
    free(pst->last_name);
}