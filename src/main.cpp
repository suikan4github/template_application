#include <iostream>
#include <thread>
#include "calc.hpp"

double result;

void func()
{
    Calc calc; 

    result = calc.sqrt(4);
}

int main()
{
    std::thread t(func);

    t.join();
    
    std::cout << result << std::endl;

    return 0;
}