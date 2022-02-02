#include <iostream>
#include <vector>
#include <list>

int main()
{
    int x[10] = { 1,2,3,4,5,6,7,8,9,10};
    
    int* p1 = x;
    ++p1;
    *p1 = 20;

    //std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    std::list<int> v = {1,2,3,4,5,6,7,8,9,10};
    
    auto p2 = v.begin();
    ++p2;
    *p2 = 20;
    ++p2;
    std::cout << *p2 << std::endl;
    
}

