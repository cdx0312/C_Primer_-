//
// Created by cdx on 17-6-12.
//

#ifndef NAMES_ST_NAMES_H
#define NAMES_ST_NAMES_H

#endif //NAMES_ST_NAMES_H

#define SLEN 32

//结构声明
struct names_st {
    char first[SLEN];
    char last[SLEN];
};

//类型定义
typedef struct names_st names;

//函数原型
void get_names(names *);
void show_names(const names *);
