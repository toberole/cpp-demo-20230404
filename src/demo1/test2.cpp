#include "Stu.h"
#include "test1.h"
#include <algorithm>
#include <chrono>
#include <deque>
#include <fstream>
#include <initializer_list>
#include <iostream>
#include <map>
#include <sys/stat.h>
#include <sys/types.h>
#include <thread>
#include <unistd.h>
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

void printN(const char *path, const float *buf, int size, int stride,
            float time, bool append = false)
{
    std::ofstream ofs;
    if (append) {
        ofs.open(path, std::ios::app);
    } else {
        ofs.open(path);
    }

    for (int i = 0; i < size; ++i) {
        ofs << buf[i] << " ";
        if ((i + 1) % stride == 0) {
            ofs << std::endl;
        }
    }
    ofs << time << std::endl;
    ofs.close();

    std::cout << "end ......" << std::endl;
}

int32_t createDirectory1(const std::string &directoryPath/*  /a/b/  */)
{
    uint32_t dirPathLen = directoryPath.length();
    if (dirPathLen > 4096) {
        return -1;
    }
    char tmpDirPath[4096] = {0};
    for (uint32_t i = 0; i < dirPathLen; ++i) {
        tmpDirPath[i] = directoryPath[i];
        if (tmpDirPath[i] == '\\' || tmpDirPath[i] == '/') {
            if (access(tmpDirPath, 0) != 0) {
                int32_t ret = mkdir(tmpDirPath, S_IRUSR | S_IWUSR | S_IXUSR |
                                                    S_IRWXG | S_IRWXO);
                if (ret != 0) {
                    return ret;
                }
            }
        }
    }
    return 0;
}
void test5()
{
    std::string origin_path =
        "raw_3_tof_rear_21pts/2-yaojinliang-TOF2.0_data-zicai_fu-C1_tof_rear-yjlc1_c_wd-OMS_TOF_REAR_002574_20230619175136543_0.raw.txt";
    std::cout << origin_path << std::endl;
    std::string dir = "raw_3_tof_rear_21pts";
    int index = origin_path.find_first_of("/");
    std::string dirs = origin_path.substr(0, index) + "/" + dir +  "/";
    char tmpDirPath[4096] = {0};
    for (uint32_t i = 0; i < dirs.length(); ++i) {
        tmpDirPath[i] = dirs[i];
        if (tmpDirPath[i] == '\\' || tmpDirPath[i] == '/') {
            if (access(tmpDirPath, 0) != 0) {
                int32_t ret = mkdir(tmpDirPath, S_IRUSR | S_IWUSR | S_IXUSR |
                                                    S_IRWXG | S_IRWXO);
                if (ret != 0) {
                    std::cout<<"error ......"<<std::endl;
                    return;
                }
            }
        }
    }
    std::string new_path =
        origin_path.substr(0, index) + "/" + dir + origin_path.substr(index);
   
    // std::ios::mkdir()
    // std::vector<Stu> v1;
    // Stu s1;
    // s1.age = 110;
    // v1.push_back(s1);
    // std::vector<Stu> v2 = v1;
    // std::cout << s1.age << std::endl;
    // std::vector<int> v;
    // std::cout << &v << std::endl;
    // v.push_back(1);
    // v.push_back(2);

    // auto f = [v]() {
    //     std::cout << "11111: " << &v << std::endl;
    // };
    // f();

    // std::vector<std::vector<int>> vv;
    // std::vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // vv.push_back(v);

    // auto f = [vv]() {
    //     std::this_thread::sleep_for(std::chrono::milliseconds(5000));
    //     std::vector<int> v = vv[0];
    //     std::cout << "@@@@@@@@@@@@@@@" << std::endl;
    //     for (int i = 0; i < v.size(); i++) {
    //         std::cout << v[i] << std::endl;
    //     }

    //     std::cout << "@@@@@@@@@@@@@@@" << std::endl;
    // };
    // auto ft = std::thread(f);

    // v = vv[0];
    // std::cout << "####################" << std::endl;
    // for (int i = 0; i < v.size(); i++) {
    //     std::cout << v[i] << std::endl;
    //     v[i] = i + 1;
    // }

    // std::cout << "####################" << std::endl;

    // std::this_thread::sleep_for(std::chrono::milliseconds(10000));
    // // std::cout << __PRETTY_FUNCTION__ << std::endl;
    // std::cout << __FUNCTION__ << std::endl;
    // int arr[] = {1, 2, 3, 4, 5};
    // std::cout << sizeof(arr) << std::endl;
    // char *p = "Helloworld!";
    // std::cout << sizeof(p) << std::endl;
    // typedef enum Test {
    //     a,
    //     b,
    //     c,
    // } Test;
    // Test a1 = a;
    // int a2 = a1;
    // std::cout << sizeof(short) << std::endl;
    // std::cout << sizeof(int) << std::endl;
    // std::cout << sizeof(float) << std::endl;
    // std::cout << sizeof(double) << std::endl;
    // std::cout << sizeof(long) << std::endl;
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

// 得到文件路径的目录
std::string GetPathDir(std::string filePath)
{
    std::string dirPath = filePath;
    size_t p = filePath.find_last_of('\\');
    if (p != -1) {
        dirPath.erase(p);
    }
    return dirPath;
}
