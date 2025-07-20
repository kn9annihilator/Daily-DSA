#include <iostream>

void fun1()
{
    std::cout << "fun1\n";
}

void fun2()
{
    std::cout << "Before fun1\n";
    fun1();
    std::cout << "After fun1\n";
}

int main()
{
    std::cout << "Before fun2\n";
    fun2();
    std::cout << "After fun2";
    return 0;
}
