#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
    int x[10] = {1,2,3,4,5,6,7,8,9,10};
    
    std::list<int>   s = {1,2,3,4,5,6,7,8,9,10};
    std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};


    //auto p = std::find( begin(x), end(x), 3  );
    
    // auto p = std::find( x, x+10, 3  );
    
    auto p = std::find( begin(v), end(v), 3  );

    if ( p == end(v) )
    {
        std::cout << "fail" << std::endl;
    }
    else
        std::cout << *p << std::endl;
}






