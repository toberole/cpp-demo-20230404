#include "Stu.h"
#include <iostream>

Stu::Stu()
{
    std::cout << "Stu()" << std::endl;
}

Stu::~Stu()
{
    std::cout << "~Stu" << std::endl;
}

Stu::Stu(const Stu &s)
{
    std::cout << "move Stu" << std::endl;
}

Stu &Stu::operator=(Stu &s)
{
    return *this;
}
