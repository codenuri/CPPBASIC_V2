#include <iostream>

class Point
{
    int x;
    int y;
public:
    Point(int a = 0, int b = 0) : x(a), y(b) {}
};

int main()
{
    int    n = 0;
    double d = 3.4;    

    std::cout << n; // cout.operator<<(int)
    std::cout << d; // cout.operator<<(double)

    Point pt(1,2);
    std::cout << pt; // cout.operator<<(Point)
    
                // operator<<(cout, pt)
                // operator<<(ostream, Point)
                    
                    
                    
}









