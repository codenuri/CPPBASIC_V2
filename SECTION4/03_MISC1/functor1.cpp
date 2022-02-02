
class Plus
{
public:
    int operator()(int a, int b)
    {
        return a + b;
    }
};

int main()
{
    Plus p; // p ´Â °´Ã¼

    int n = p(1,2); // p.operator()(1,2)
    
    // a + b; // a.operator+(b) 
    // a - b; // a.operator-(b)
    // a();   // a.operator()() 
    // a(1,2);// a.operator()(1,2)
}





