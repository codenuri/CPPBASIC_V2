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
    cout << s1 << endl; 
    
     
    String s3 = "world";
    cout << s3 << endl;
    
    s3 = s1; // s3.operator=(s1);
    
    cout << s3 << endl;
    
}










