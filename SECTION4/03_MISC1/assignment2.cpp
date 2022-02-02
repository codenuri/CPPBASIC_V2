#include <iostream>

class Point
{
    int x;
    int y;
public:
    Point(int a, int b) : x(a), y(b) {}
    
    void print() const 
    { 
        std::cout << x << ", " << y << std::endl;
    }
    
    Point&  operator=(const Point& p)
    {
        std::cout << "=" << std::endl;
        x = p.x;
        y = p.y;
        
        return *this;
    }
};

int main()
{
    Point p1(1,1); 
    Point p2(2,2); 
    Point p3(3,3);
    
    //p2 = p1; // p2.operator=(p1)
    
    p2 = (p1 = p3);
        
    p2.print(); // 1, 1
}



