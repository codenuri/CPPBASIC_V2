#include "car.h"

template<typename T> class Ptr
{
    T* pObj;
public:
    Ptr(T* p = 0) : pObj(p) {}
    
    ~Ptr() { delete pObj;}
    
    T* operator->() { return pObj;}
    T& operator*()  { return *pObj;}
};

int main()
{
    //Car* p = new Car;
    Ptr<Car> p = new Car; // Ptr p(new Car)
    
    p->Go(); // p.operator->()Go()
             // p.operator->()->Go() // 1000->Go()
             
    (*p).Go(); // (p.operator*()).Go()
}






