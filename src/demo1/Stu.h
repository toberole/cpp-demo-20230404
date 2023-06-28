#pragma once
#include <string>

class Stu
{
public:
    Stu();
    ~Stu();
    Stu(const Stu &&s);
    Stu &operator=(Stu &s);
public:
    std::string name;
    int age;
};