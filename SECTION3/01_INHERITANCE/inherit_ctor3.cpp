class Animal
{
protected:
    Animal() {}
};

class Dog : public Animal
{
public:
    Dog() : Animal() {} 
};

int main()
{
    // ������ ������ ��� ������
    //Animal a;   // error
    Dog    d;   // ok
}

