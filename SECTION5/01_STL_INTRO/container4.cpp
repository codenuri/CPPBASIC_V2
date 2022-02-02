#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    
    v.push_back(20);
    
    /*
    for( int i = 0; i < v.size(); i++ )
        std::cout << v[i] << std::endl;
    */
    for ( auto& n : v)
        std::cout << n << std::endl;
    
}