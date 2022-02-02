#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
    std::list<int>   s = {1,2,3,4,5,6,7,8,9,10};
    std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    
    //s.find(5);
    //v.find(5);
    
    std::find( begin(v), end(v), 3  );

}
