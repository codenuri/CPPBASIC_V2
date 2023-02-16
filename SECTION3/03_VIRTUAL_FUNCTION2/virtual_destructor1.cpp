#include <iostream>
using namespace std;

class Base
{
public:
    Base()  { cout << "Base()" << endl;}
    virtual ~Base() { cout << "~Base()" << endl;}
};

class Derived : public Base
{
public:
    Derived()  { cout << "Derived()"  << endl;}
    virtual  ~Derived() { cout << "~Derived()" << endl;}    
};

int main()
{
    Base* p = new Derived; // Derived ��ü ����
    
    // �����Ϸ��� p�� Base ��� ����.
    delete p;  // 1. p�� Base*�̴�.
               // 2. �Ҹ��ڴ� �����Լ��� �ƴϴ�.
}







