#include <iostream>

class Point
{
    int x;
    int y;
public:
    Point(int a = 0, int b = 0) : x(a), y(b) {}
    
    friend std::ostream& 
    operator<<(std::ostream& os, const Point& pt);
};

std::ostream& operator<<(std::ostream& os, const Point& pt)
{
    os << pt.x << ", " << pt.y;
    return os;
}

int main()
{
    Point pt(1,2);
    std::cout << pt << std::endl;  // operator<<(cout, pt)
            
                    
}









