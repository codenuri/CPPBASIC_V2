#include <iostream>
#include <list>

int main()
{
    int n = 0;

    std::list<int> s;
    
    s.push_front(10);
    s.push_front(20);
    s.push_front(30);
    s.push_back(40);

    for ( auto n : s )
        std::cout << n << ", ";
}