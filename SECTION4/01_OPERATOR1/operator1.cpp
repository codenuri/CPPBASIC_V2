#include <iostream>

class Point
{
    int x;
    int y;
public:
    Point( int a = 0, int b = 0) : x(a), y(b) {}
};

int main()
{
    int n = 1 + 2;
    
    Point p1(1,1);
    Point p2(2,2);
    Point p3 = p1 + p2; // operator+(p1, p2)
            // operator+(Point, Point)
            // p1.operator+(p2) => operator+(Point) ¸â¹öÇÔ¼ö
            
    
}