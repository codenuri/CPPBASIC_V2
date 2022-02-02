#include <iostream>

class Car
{
    int color;
public:
    ~Car()    { std::cout << "~Car()" << std::endl;}
    
    void Go() { std::cout << "Car Go" << std::endl;}
};