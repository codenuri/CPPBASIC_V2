#include <cstdio>

namespace std 
{
    class ostream
    {
    public:
        ostream& operator<<(int n) { printf("%d", n); return *this;}
        ostream& operator<<(double d) 
        {
             printf("%f", d);
             return *this;
        }
    };
    ostream cout;    
}

int main()
{
    std::cout << 3;  // cout.operator<<(3)
    std::cout << 3.4;
    std::cout << 3 << 3.4;
}






