#include <iostream>
#include <vector>
#include <list>

int main()
{
    std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};
        
    // 规过 1.
    for ( int i = 0; i < std::size(v); i++)
    {
        std::cout << v[i] << std:: endl;
    }
    
    
    
    
    
    // 规过 2.
    auto p1 = std::begin(v);
    
    while( p1 != std::end(v) )
    {
        std::cout << *p1 << std::endl;
        ++p1;
    }
    
    
    
    
    
    // 规过 3.
    for( auto& n : v )
        std::cout << n << std::endl;
}







