#include <iostream>

int square(int a)
{
    return a * a;
}

double square(double a)
{
    return a * a;
}

template<typename T> void foo(T a) 
{
    
}

int main()
{
    //printf("%p\n", &foo);
    
    printf("%p\n", &foo<int> );
    
    
    
    //printf("%p\n", &square); // ??
    
    printf("%p\n", static_cast<int(*)(int)>(&square)); // ??
    
    //auto a = &square; // error
    int(*f)(int) = &square; // ok
    
    
    
    
    
    //std::cout << (void*)&square << std::endl; 
    // cout.operator<<(함수주소)       
    // cout.operator<<( int(*f)(int) )       
}





