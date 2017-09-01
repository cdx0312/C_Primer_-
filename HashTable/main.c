#include <stdio.h>
#include <stdlib.h>

#include "HashTable.h"

struct Student {
    int age;
    float score;
    char name[32];
    char data[1024 * 1024 * 10];
};

static void free_student(void * stu) {
    free(stu);
}

static void show_student(struct Student *p) {
    printf("name : %s, age: %d, score: %.2f\n", p->name, p->age, p->score);
}

int main() {
    HashTable* ht = hash_table_new();
    if (NULL == ht)
        return -1;

    for (int i = 0; i < 100; i++) {
        struct Student * stu = (struct Student*)malloc(sizeof(struct Student));
        stu->age = 18 + rand()%5;
        stu->score = 50.0f + rand() % 100;
        sprintf(stu->name, "student %d", i);
        hash_table_put2(ht, stu->name,stu,free_student);
    }

    for (int i = 0; i < 100; ++i) {
        char name[32];
        sprintf(name, "student%d", i);
        struct Student * stu = (struct Student*)hash_table_get(ht, name);
        show_student(stu);
    }
    hash_table_delete(ht);
    return 0;
}