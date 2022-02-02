#include <cstdio>

class ostream
{
public:
    ostream& flush() { return *this;}  // 출력 버퍼 비우기
    ostream& put(char c)       {printf("%c", c);return *this;}
    ostream& operator<<(int n) {printf("%d", n);return *this;}

    ostream& operator<<( ostream&(*f)(ostream&) )
    {
        f(*this);
        return *this;
    }
};
ostream cout;

ostream& endl( ostream& os)
{
    os.put('\n');
    os.flush();
    return os;
}

int main()
{
    cout << 3;
    cout << endl; // cout.operator<<(endl)
}
















