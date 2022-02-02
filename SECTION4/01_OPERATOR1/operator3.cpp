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
    
    // 멤버로 만드는 operator+
    Point operator+( const Point& p )
    {
        Point temp;
        temp.x = p.x + x;
        temp.y = p.y + y;
        return temp;        
    }
};

int main()
{
    Point p1(1,1);
    Point p2(2,2);
    Point p3 = p1 + p2;  // operator+(p1, p2)
                         // p1.operator+(p2)
    
    p3.print(); 
}






