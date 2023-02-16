#include <iostream>

class Shape
{
public:
    virtual void Draw() { std::cout << "Shape::Draw" << std::endl; }
};
class Rect : public Shape
{
public:
    virtual void Draw() { std::cout << "Rect::Draw" << std::endl; }
};

int main()
{
    Shape s; 
    Rect r;  
    
    Shape* p = &r;
    
    //--------------
    //int n = 0;
    //std::cin >> n;
    //if ( n == 1 ) p = &s;
    //--------------
    
    // �Ʒ� �ڵ带 ������ �Ҷ�
    // p�� �����ü�� ����ų�� �����Ϸ��� �˼� ������ ?
    
    p->Draw();    // Rect::Draw
}

















