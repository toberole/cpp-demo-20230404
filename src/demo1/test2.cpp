#include "test1.h"
#include <deque>
#include <initializer_list>
#include <iostream>
#include <map>
#include <utility>

void test5()
{
    std::map<int, int> m;
    m[1] = 0;
    m[1]++;
    m[1]++;
    std::cout << "m[1]: " << m[1] << std::endl;
    // std::cout << "Hello Test5 ......" << std::endl;
    // std::deque<int> q1;
    // q1.push_back(1);
    // q1.push_back(2);
    // std::deque<int> q2 = std::move(q1);
    // std::cout << "q1 size: " << q1.size() << ",q2 size: " << q2.size()
    //           << std::endl;
    // q1.push_back(3);
    // std::cout << "q1 size: " << q1.size() << ",q2 size: " << q2.size()
    //           << std::endl;

    // auto x = {2};

    // std::map<std::string, std::string> m;
    // m["hello"] = "1";
    // m["world"] = "2";
    // for (auto& [k, v] : m) {
    //     std::cout << "k: " << k << std::endl;
    //     std::cout << "v: " << v << std::endl;
    // }

    std::cout << "Hello World!" << std::endl;
    std::cout << "" << std::endl;

    float f = 0.010517986;
    f = ((int)(f * 100)) / 1 * 1.0f / 100;
    std::cout << f << std::endl;
}