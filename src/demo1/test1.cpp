#include "test1.h"
#include <_types/_uint64_t.h>
#include <algorithm>
#include <atomic>
#include <chrono>
#include <cmath>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <mutex>
#include <nlohmann/json.hpp>
#include <random>
#include <ratio>
#include <sys/syslimits.h>
#include <thread>
#include <vector>
#define TAG_TEST "Test"

// NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(name, member1, member2, …)
// 将在要为其创建代码的类/结构的命名空间内定义。
// NLOHMANN_DEFINE_TYPE_INTRUSIVE(name, member1, member2, …)
// 将在要为其创建代码的类/结构中定义。 该宏还可以访问私有成员。
class Test
{
public:
    int a;
    int b;

    NLOHMANN_DEFINE_TYPE_INTRUSIVE(Test, a, b);
};

// NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Test, a, b);
#define GTEST_TEST_CLASS_NAME_(test_suite_name, test_name) \
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

    typedef enum {
        i1,
        i2
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
double_t two_decimals(double_t d, int n)
{
    uint64_t tmp = std::pow(10, n);
    return ((int64_t)(d * tmp)) / 1 * 1.0 / tmp;
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
    std::mutex mutex;
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

void Print(const std::vector<int> &vec)
{
    std::cout << "size: " << vec.size() << std::endl;
    for (const auto &i : vec) {
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

class Student
{
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

    typedef struct SS {
        int age;
        // SS(int age)
        // {
        //     this->age = age;
        //     std::cout << "@@@@@@" << std::endl;
        // }
    } SS;
    std::deque<SS> ss_q;
    SS s1;
    s1.age = 11;
    ss_q.push_back(s1);
    s1.age = 22;
    ss_q.push_back(s1);

    for (auto &s : ss_q) {
        std::cout << s.age << std::endl;
    }
}
// std::atomic_int test_int;
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
    // std::cout << "xxxx" << std::endl;
    // std::vector<int> v;
    // v.emplace_back(1);
    // if (std::find(v.begin(), v.end(), 1) != v.end()) {
    //     std::cout << "11" << std::endl;
    // }
    // else {
    //     std::cout << "12" << std::endl;
    // }

    // std::deque<int> q;

    // q.push_back(1);
    // q.push_back(3);
    // q.push_back(2);
    // q.push_back(3);
    // q.push_back(2);
    // q.push_back(2);

    // std::sort(q.begin(), q.end(),
    //           [](int a, int b) -> bool { return !(a >= b); });

    // for (int n : q) {
    //     std::cout << n << std::endl;
    // }

    // typedef struct S1 {
    //     int n;
    // } S1;
    // std::deque<S1> q1;
    // std::default_random_engine e;
    // e.seed(time(0));
    // for (size_t i = 0; i < 200; i++) {
    //     auto nn = e() % 100;
    //     q1.push_back(S1{.n = static_cast<int>(nn)});
    // }
    // std::sort(q1.begin(), q1.end(), [](const S1 ss, const S1 s2) -> bool {
    //     if (ss.n < s2.n) {
    //         return true;
    //     } else if (ss.n > s2.n) {
    //         return false;
    //     } else {
    //         return false;
    //     }
    // });

    //    for (auto s: q1) {
    //        std::cout << s.n << std::endl;
    //    }

    //    std::deque<int> d;
    //    auto i = d.back();

    // std::map<std::string, std::string> m = {"1", "2"};
    // m["2"]                               = "123";

    // const std::vector<int> v1{1, 2, 5, 5, 5, 9};
    // const std::vector<int> v2{2, 5, 7};
    // std::vector<int>       diff;
    // std::set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(),
    //                     std::inserter(diff, diff.begin()));
    // for (size_t i = 0; i < diff.size(); i++) {
    //     std::cout << diff[i] << std::endl;
    // }

    // typedef struct Stu
    // {
    //   public:
    //     int age;
    //     Stu(int i) : age(i)
    //     {
    //         std::cout << "stu ......" << std::endl;
    //     }

    // } Stu;
    // std::vector<Stu> v;
    // Stu              s(1);
    // v.push_back(s);

    // s = 2;
    // v.push_back(s);

    // s = 5;
    // v.push_back(s);

    // s = 4;
    // v.push_back(s);

    // s = 3;
    // v.push_back(s);
    // std::cout << "@@@@@@@@@" << std::endl;
    // std::sort(v.begin(), v.end(), [](const Stu s1, const Stu s2) -> bool {
    //     return s1.age > s2.age;
    // });

    // for (auto s : v) {
    //     std::cout << s.age << std::endl;
    // }

    // std::deque<int> q;
    // q.push_back(1);
    // std::cout << q.size() << std::endl;
    // std::deque<int> q1 = std::move(q);
    // std::cout << q.size() << std::endl;
    // std::cout << q1.size() << std::endl;

    // std::deque<int> q;
    // std::cout << "123" << std::endl;

    // std::vector<int> v;
    // v.push_back(123);

    // std::deque<int> d;
    // d.push_back(1);
    // d.push_back(3);
    // d.push_back(2);
    // d.back();
    // std::sort(d.begin(), d.end(), [=](int a, int b) -> bool { return a > b;
    // });
    // // for (auto n : d) {
    //     std::cout << "n: " << n << std::endl;
    // }

    // std::vector<int> v;
    // std::cout << v[2] << std::endl;
    // std::vector<int> v1;
    // v.push_back(1);
    // v.push_back(2);
    // v1.resize(v.size());
    // for (auto n : v1) {
    //     std::cout << "n: " << n << std::endl;
    // }

    // std::vector<int> vv;
    // vv.emplace_back(1);
    // vv.emplace_back(2);
    // for (auto i : vv) {
    //     std::cout << i << std::endl;
    // }

    // std::vector<int> v;
    // v.push_back(1);
    // std::cout << v[2] << std::endl;

    // int         i = 0;
    // std::thread th =
    //     std::thread([i]() -> void { std::cout << i << std::endl; });
    // th.detach();

    // std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    // std::map<std::string, int> mm;
    // auto i = mm.count("hello");
    // std::cout << i << std::endl;

    // std::cout << "Hello World!" << std::endl;

    std::vector<int> v;
    v.push_back(3);
    v.push_back(1);
    v.push_back(2);
    std::sort(v.begin(), v.end(), [](int a, int b) -> bool {
        return a > b;
    });
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << std::endl;
    }
}
