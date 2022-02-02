#include <iostream>
#include <vector>
#include <list>

int main()
{
    std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    
    //std::vector<int>::iterator p1 = v.begin();
    auto p1 = v.begin();
    auto p2 = v.end();
    
    //*p2 = 20; // runtime error
    
    while( p1 != p2 )
    {
        std::cout << *p1 << std::endl;
        ++p1;
    }
}

