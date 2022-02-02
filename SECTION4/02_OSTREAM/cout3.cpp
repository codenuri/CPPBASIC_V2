/*
// 1998년 C++이 표준화 되기 이전에 사용하던 클래스
class ostream 
{
    //...
};

// 1998년 표준화 이후
template<typename T, typename Tratis = char_traits<T>>
class basic_ostream
{
};
typedef basic_ostream<char> ostream;
typedef basic_ostream<wchar_t> wostream;

ostream cout;
wostream wcout;
*/
#include <iostream>

int main()
{
    std::cout << "hello";
    std::wcout << L"hello";
}






