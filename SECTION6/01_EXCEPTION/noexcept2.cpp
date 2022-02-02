#include <iostream>

void foo() //noexcept
{
}

int main()
{
    bool b = noexcept( foo() );
    
    std::cout << b << std::endl;
}