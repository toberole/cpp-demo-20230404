#include "test1.h"
#include <iostream>
#include <list>
#include <vector>
#include <nlohmann/json.hpp>
#include <mutex>

// NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(name, member1, member2, …) 将在要为其创建代码的类/结构的命名空间内定义。
// NLOHMANN_DEFINE_TYPE_INTRUSIVE(name, member1, member2, …) 将在要为其创建代码的类/结构中定义。 该宏还可以访问私有成员。
class Test {
public:
    int a;
    int b;

    NLOHMANN_DEFINE_TYPE_INTRUSIVE(Test, a, b);
};

//NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Test, a, b);
#define GTEST_TEST_CLASS_NAME_(test_suite_name, test_name) \
  test_suite_name##_##test_name##_Test

void GTEST_TEST_CLASS_NAME_(a, b)() { std::cout << __func__ << std::endl; }

// NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(name, member1, member2, …) 将在要为其创建代码的类/结构的命名空间内定义。
// NLOHMANN_DEFINE_TYPE_INTRUSIVE(name, member1, member2, …) 将在要为其创建代码的类/结构中定义。 该宏还可以访问私有成员。
void test1() {
    GTEST_TEST_CLASS_NAME_(a, b)();

    typedef enum E {
        i1, i2
    } E;
    Test test;
    test.a = 11;
    test.b = 22;
    nlohmann::json json = test;
    std::cout << json.dump() << std::endl;
    json["a"] = 33;
    test = json;
    std::cout << test.a << std::endl;

    std::vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    std::mutex mutex;
    std::lock_guard<std::mutex> lock(mutex);
}

void test2(){
    std::mutex mutex;
    std::unique_lock<std::mutex>lock1(mutex);
    lock1.unlock();
    std::cout<<"test2 ......"<<std::endl;
}