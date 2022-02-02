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
    
    Point& operator++()    
    {
        ++x;
        ++y;
        return *this;
    }
    //Point operator++(int) {  } // ÈÄÀ§Çü
};

int main()
{
    Point p(1,1);

    ++++p;  // ++(++p)
            // (p.operator++()).operator++()
    
    
    

    //p++;  // p.operator++()
    
    p.print(); // 3, 3
    
//    int n = 3;
//    ++++n; // 5

}



