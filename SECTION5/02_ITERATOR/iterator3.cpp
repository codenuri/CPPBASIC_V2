#include <iostream>
#include <vector>
#include <list>

int main()
{
    //int v[10] = {1,2,3,4,5,6,7,8,9,10};
    
    std::list<int> v = {1,2,3,4,5,6,7,8,9,10};
    //std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    
//    auto p1 = v.begin();
//    auto p2 = v.end();

    auto p1 = std::begin(v);
    auto p2 = std::end(v);
    
    while( p1 != p2 )
    {
        std::cout << *p1 << std::endl;
        ++p1;
    }
}

