#include "test1.h"
#include <iostream>
#include <list>
#include <mutex>
#include <nlohmann/json.hpp>
#include <thread>
#include <vector>

#define TAG_TEST "Test"

// NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(name, member1, member2, …)
// 将在要为其创建代码的类/结构的命名空间内定义。
// NLOHMANN_DEFINE_TYPE_INTRUSIVE(name, member1, member2, …)
// 将在要为其创建代码的类/结构中定义。 该宏还可以访问私有成员。
class Test {
  public:
    int a;
    int b;

    NLOHMANN_DEFINE_TYPE_INTRUSIVE(Test, a, b);
};

// NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Test, a, b);
#define GTEST_TEST_CLASS_NAME_(test_suite_name, test_name)                     \
    test_suite_name##_##test_name##_Test

void GTEST_TEST_CLASS_NAME_(a, b)()
{
    std::cout << __func__ << std::endl;
}

// NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(name, member1, member2, …)
// 将在要为其创建代码的类/结构的命名空间内定义。
// NLOHMANN_DEFINE_TYPE_INTRUSIVE(name, member1, member2, …)
// 将在要为其创建代码的类/结构中定义。 该宏还可以访问私有成员。
void test1()
{
    GTEST_TEST_CLASS_NAME_(a, b)
    ();

    typedef enum { i1, i2 } E;
    Test test;
    test.a              = 11;
    test.b              = 22;
    nlohmann::json json = test;
    std::cout << json.dump() << std::endl;
    json["a"] = 33;
    test      = json;
    std::cout << test.a << std::endl;

    std::vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    std::mutex                  mutex;
    std::lock_guard<std::mutex> lock(mutex);
}

void test1_1()
{
    thread_local int i = 0;
    std::cout << "test1_1 " << std::this_thread::get_id() << ",i: " << i
              << std::endl;
    std::unordered_map<std::string, std::string> map;
}

void test2()
{
    std::mutex                   mutex;
    std::unique_lock<std::mutex> lock1(mutex);
    lock1.unlock();
    std::cout << "test2 ......" << std::endl;

    std::thread th(test1_1);
    th.detach();

    std::thread th1(test1_1);
    th1.detach();

    std::thread th2(test1_1);
    th2.detach();
}

bool IsOdd(int i)
{
    return i & 1;
}

void Print(const std::vector<int>& vec)
{
    std::cout << "size: " << vec.size() << std::endl;
    for (const auto& i : vec) {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
}

int test3_1()
{
    // Initializes a vector that holds numbers from 0-9.
    std::vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    Print(v);

    // Removes all elements with the value 5.
    v.erase(std::remove(v.begin(), v.end(), 9), v.end());
    Print(v);

    // Removes all odd numbers.
    v.erase(std::remove_if(v.begin(), v.end(), IsOdd), v.end());
    Print(v);

    Enum1 e = A;
    std::cout << "Enum1: " << e << std::endl;

    return 0;
}

class Student {
  private:
    /* data */
  public:
    Student(/* args */);
    ~Student();
};

Student::Student(/* args */)
{
    std::cout << "Student ......" << std::endl;
}

Student::~Student()
{
    std::cout << "~Student ......" << std::endl;
}

void test3()
{
    // std::cout << "Hello test3" << std::endl;
    // std::cout << std::acos(-1) << std::endl;
    // std::cout << (int64_t)1e6 << std::endl;

    // std::vector<int> v;
    // v.emplace_back(1);
    // v.emplace_back(2);
    // v.emplace_back(3);
    // std::cout << v.size() << std::endl;
    // std::remove(v.begin(), v.end(), 2);
    // std::cout << v.size() << std::endl;
    // test3_1();
    // std::deque<int> d;
    // d.push_back(1);
    // std::cout << d.size() << std::endl;
    // d.pop_front();
    // std::cout << d.size() << std::endl;

    // std::deque<int> q;
    // q.push_back(1);
    // q.push_back(3);
    // q.push_back(2);
    // q.push_back(4);
    //    std::sort(q.begin(), q.end());
    //    for (int n : q)
    //        std::cout << n << ' ';

    // std::cout << "@@@@@" << std::endl;
    // std::deque<int> q1(q.rbegin(), q.rbegin() + 4);
    //     for (int n : q1)
    //         std::cout << n << ' ';

    //    auto i = std::min_element(q.begin(), q.end());
    //    std::cout<<*i<<std::endl;

    // std::sort(q.begin(), q.end(), [](int i1, int i2) -> bool {
    //     if (i1 > i2) {
    //         return false;
    //     }
    //     else if (i1 < i2) {
    //         return true;
    //     }
    //     else if (i1 == i2) {
    //         return true;
    //     }
    // });
    // for (int n : q)
    //     std::cout << n << ' ';

    typedef struct SS
    {
        int age = -1;
        // SS(int age)
        // {
        //     this->age = age;
        //     std::cout << "@@@@@@" << std::endl;
        // }
    } SS;
    std::deque<SS> ss_q;
    ss_q.push_back(SS{.age = 11});
    ss_q.push_back(SS{.age = 22});
    std::deque<SS> temp(ss_q.rbegin(), ss_q.rbegin() + 1);

    for (auto& s : ss_q) {
        std::cout << s.age << std::endl;
    }
}

void test4()
{
    // std::unordered_map<int, int> m;
    // m[1] = 100;
    // std::cout << "m size: " << m.size() << std::endl;
    // if (m.find(2) != m.end()) {
    //     std::cout << "存在" << std::endl;
    // }
    // else {
    //     std::cout << "不存在" << std::endl;
    // }

    // int n = m[2];
    // std::cout << "m size: " << m.size() << std::endl;
    // std::cout << "m[2]: " << m[2] << std::endl;

    // Student              stu;
    // std::vector<Student> v;
    // // v.push_back(stu);
    // v.emplace_back(stu);

    // std::vector<int> v;
    // v.push_back(1);
    // std::cout << "vv ......" << std::endl;
    // std::cout << v[1] << std::endl;

    // std::vector<float> v1;
    // std::cout << "vv size: ......" << v1.size() << std::endl;
    // v1.push_back(1);
    // std::cout << "vv ......" << std::endl;
    // std::cout << v1[1] << std::endl;

    // std::cout << "++++++++++++++++++" << std::endl;
    // std::deque<int> dq;
    // dq.emplace_back(1);
    // dq.rbegin();
    // dq = {};
    std::cout << "xxxx" << std::endl;
    std::vector<int> v;
    v.emplace_back(1);
    if (std::find(v.begin(), v.end(), 1) != v.end()) {
        std::cout << "11" << std::endl;
    }
    else {
        std::cout << "12" << std::endl;
    }
}
