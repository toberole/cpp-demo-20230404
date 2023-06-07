#include "Stu.h"
#include "test1.h"
#include <algorithm>
#include <deque>
#include <initializer_list>
#include <iostream>
#include <map>
#include <utility>
#include <vector>

void test6(int &i)
{
    std::cout << i++ << std::endl;
}

float cal()
{
    std::cout << "cal ......" << std::endl;
    return std::acos(-1);
}

void test5_1()
{
    static float j = cal();
    std::cout << "test5_1 ...... " << j << std::endl;
}

void test5()
{
    std::cout << sizeof(short) << std::endl;
    std::cout << sizeof(int) << std::endl;
    std::cout << sizeof(float) << std::endl;
    std::cout << sizeof(double) << std::endl;
    std::cout << sizeof(long) << std::endl;
    // std::cout << sizeof(float) << std::endl;
    // Stu s;
    // std::vector<Stu> v;
    // v.push_back(s);
    // std::cout << 1e3 << std::endl;
    // std::string fileName =
    //     (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__);
    // std::cout << fileName << std::endl;
    // auto pi = std::acos(-1);
    // std::cout << pi << std::endl;
    // test5_1();
    // test5_1();
    // std::vector<int> v;
    // v.push_back(1);
    // v.push_back(3);
    // v.push_back(2);
    // std::sort(v.begin(), v.end(), [](int a, int b) {
    //     // return a > b;
    //     return a < b;
    // });
    // for (int i = 0; i < v.size(); i++) {
    //     std::cout << v[i] << std::endl;
    // }
    // std::map<int, int> m;
    // m[1] = 0;
    // m[1]++;
    // m[1]++;
    // std::cout << "m[1]: " << m[1] << std::endl;
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

    // std::cout << "Hello World!" << std::endl;
    // std::cout << "" << std::endl;

    // float f = 0.010517986;
    // f = ((int)(f * 100)) / 1 * 1.0f / 100;
    // std::cout << f << std::endl;
}