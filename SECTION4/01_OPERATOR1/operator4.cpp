#include <iostream>

class Point
{
    int x;
    int y;
public:
    Point( int a = 0, int b = 0) : x(a), y(b) {}
    
    void print() const { std::cout << x << ", " << y << std::endl;  }

    // 멤버로 구현
    Point operator+( const Point& p )
    {
        std::cout << "member" << std::endl;
        
        Point temp;
        temp.x = p.x + x;
        temp.y = p.y + y;
        return temp;        
    }
    
    friend Point operator+(const Point& p1, const Point& p2);
};

// 일반 함수로 구현
Point operator+(const Point& p1, const Point& p2)
{
    std::cout << "non member" << std::endl;
    
    Point temp;
    temp.x = p1.x + p2.x;
    temp.y = p1.y + p2.y;
    return temp;
}

int main()
{
    Point p1(1,1);
    Point p2(2,2);
    Point p3 = p1 + p2; // 1. p1.operator+(p2)
                        // 2. operator+(p1, p2)
                        
    p1 + 1; // 1. p1.operator+(int)
            // 2. operator+(Point, int)
            
    1 + p1; // 1. 1.operator+(Point) - 만들수 없다.
            // 2. operator+( int, Point) - 만들수 있다.
    
    
    
    p3.print(); 
}






