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
    
    friend ostream& operator<<(ostream& os, const String& s);
};

ostream& operator<<(ostream& os, const String& s)
{
    return os << s.buff;
}

int main()
{
    String s1 = "hello"; 
    
    cout << s1 << endl; // operator<<(cout, s1)
    
    /*
    String s2 = s1;
    cout << s2 << endl;
    
    String s3 = "world";
    cout << s3 << endl;
    
    s3 = s1;
    cout << s3 << endl;
    */
}