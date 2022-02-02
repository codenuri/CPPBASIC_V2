#include <iostream>
#include <cstring>
using namespace std;

class String
{
    char* buff;
    int   size;
public:
    String(const char* s)
    {
        size = strlen(s);        
        buff = new char[size + 1];
        strcpy(buff, s);
    }
    ~String() { delete[] buff;}
    
    
    String( const String& s) : size(s.size)
    {
        buff = new char[size + 1];
        strcpy(buff, s.buff);
    }
    
    String& operator=(const String& s)
    {
        // 대입연산자는 자신과의 대입을 조사해야 한다.
        
        if ( &s == this )
            return *this;
        
        
        size = s.size;
        
        delete[] buff;
        
        buff = new char[size + 1];
        
        strcpy(buff, s.buff);
        
        return *this;
    }
    
    
    
    friend ostream& operator<<(ostream& os, const String& s);
};

ostream& operator<<(ostream& os, const String& s)
{
    return os << s.buff;
}

int main()
{
    String s1 = "hello"; 
    
    s1 = s1; // s1.operator=(s1);
    
    cout << s1 << endl;
    
}










