#include <iostream>

class Point
{
    int x;
    int y;
public:
    Point(int a = 0, int b = 0) : x(a), y(b) {}
    
    void print() const 
    { 
        std::cout << x << ", " << y << std::endl;
    }
};

int main()
{
    int n = 3;
    ++n;
    
    Point p(1,1);
    ++p;

}



