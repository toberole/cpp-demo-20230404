#include "demo1/Stu.h"
#include "demo1/test1.h"
#include <chrono>
#include <cmath>
#include <iostream>
#include <thread>
#include <vector>

extern int Test_static_i;

int main(int argc, char const *argv[])
{
    std::cout << "Hello World!" << std::endl;
    // test1();
    // test2();
    // test3();
    // test4();
    test5();
    // std::this_thread::sleep_for(std::chrono::milliseconds(5000));
    // std::cout << LOG_TAG << std::endl;
    return 0;
}
