//可以进行传递和返回结构,而指针也支持双向传递
//使用指向结构的指针
#include <stdio.h>
#include <string.h>

struct namect {
    char first_name[20];
    char last_name[20];
    int letters;
};

void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(const struct namect *);

int main() {
    struct namect person;
    getinfo(&person);
    makeinfo(&person);
    showinfo(&person);
    return 0;
}

void getinfo(struct namect * pst) {
    printf("Please enter your first name?\n");
    gets(pst->first_name);
    printf("Please enter your last name?\n");
    gets(pst->last_name);
}

void makeinfo(struct namect * pst) {
    pst->letters = strlen(pst->first_name) + strlen(pst->last_name);
}

void showinfo(const struct namect * pst) {
    printf("%s %s, your name has %d letters.\n", pst->first_name,pst->last_name,pst->letters);
}