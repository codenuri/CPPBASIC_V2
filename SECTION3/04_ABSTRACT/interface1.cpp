#include <iostream>

class Camera
{
public:
    void take() 
    {
         std::cout << "take picture" << std::endl; 
    }
};

class HDCamera
{
public:
    void take() 
    {
         std::cout << "take picture HD" << std::endl; 
    }
};

class People
{
public:    
    void useCamera(Camera* p) { p->take();}
    void useCamera(HDCamera* p) { p->take();}
};

int main()
{
    People p;
    Camera c1;
    p.useCamera(&c1);
    
    HDCamera hd;
    p.useCamera(&hd);
}





