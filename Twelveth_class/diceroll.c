//
// Created by cdx on 17-6-7.
//掷骰子的模拟程序
#include <stdio.h>
#include <stdlib.h>
#include "diceroll.h"

int roll_count = 0;

static int rollem (int sides) {       //私有函数
    int roll;
    roll = rand() % sides + 1;
    ++roll_count;
    return roll;
}

int roll_n_dice (int dice, int sides) {
    int d;
    int total = 0;
    if (sides < 2) {
        printf("Need at least 2 sides \n");
        return -2;
    }
    if (dice < 1) {
        printf("Need at least 1 dice.\n");
        return -1;
    }
    for (d = 0; d < dice; d++) {
        total += rollem(sides);
    }

    return total;
}

