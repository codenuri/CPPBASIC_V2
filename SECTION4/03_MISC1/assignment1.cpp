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
};

int main()
{
    Point p1(1,1); // 생성자 호출
    Point p2(2,2); // 생성자 호출
    Point p3(p1);  // 복사 생성자 호출
    Point p4 = p1; // 복사 생성자 호출
    
    p4 = p2;  // p4.operator=(p2)

    p4.print();
    
    int a = 0; // 초기화
    int b;
    b = 0; // 대입
    
}



