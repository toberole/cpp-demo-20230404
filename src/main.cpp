#include "demo1/test1.h"
#include <iostream>
#include <chrono>
#include <thread>

int main(int argc, char const *argv[]) {
    std::cout << "Hello World!" << std::endl;
//    test1();
    // test2();
    test3();
    std::this_thread::sleep_for(std::chrono::milliseconds(5000));
    return 0;
}
