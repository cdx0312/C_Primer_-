//
// Created by cdx on 17-6-7.
//
static unsigned long int next = 1; //种子
int rand0(void) {
    next = next * 1103515245 + 12345;
    return (unsigned int) (next/65536) % 32768;
}
