#include <iostream>

class Point
{
    int x;
    int y;
public:
    Point( int a = 0, int b = 0) : x(a), y(b) {}
    
    void print() const 
    { 
        std::cout << x << ", " << y << std::endl;
    }
    
    friend Point operator+(const Point& p1, const Point& p2);
};

Point operator+(const Point& p1, const Point& p2)
{
    Point temp;
    temp.x = p1.x + p2.x;
    temp.y = p1.y + p2.y;
    return temp;
}

int main()
{
    Point p1(1,1);
    Point p2(2,2);
    Point p3 = p1 + p2;  // operator+(p1, p2)
    
    p3.print(); // 3, 3
}






