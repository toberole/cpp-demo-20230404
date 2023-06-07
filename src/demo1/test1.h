#pragma once

#include <cmath>

#define LOG_TAG "Test1"

static int Test_static_i = 110;

void test1();

void test2();

void test3();

void test4();

void test5();

void test6(int &i);

double_t two_decimals(double_t d, int n);

typedef enum Enum1 {
    A = 1,
    B = 2
} Enum1;

// #pragma pack(push)   // 保存对齐状态
// #pragma pack(4)      // 设定为 4 字节对齐
// struct test {
//     char m1;
//     double m4;
//     int m3;
// };
// #pragma pack(pop)   // 恢复对齐状态
