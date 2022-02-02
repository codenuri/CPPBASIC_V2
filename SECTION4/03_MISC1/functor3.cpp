#include <iostream>
#include <functional> // plus<>, minus<>, multilies<>
/*
template<typename T>
class Plus
{
public:
    T operator()(T a, T b)
    {
        return a + b;
    }
};
*/

int main()
{
    std::plus<double> p;
    std::cout << p(1,1) << std::endl;
    
}