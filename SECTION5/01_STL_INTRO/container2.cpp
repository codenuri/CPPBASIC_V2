#include <iostream>
#include <vector>
#include <list>

int main()
{
    //vector<int> v;
    list<int> v;
    
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    
    size_t sz = v.size();
    
    //int n1 = v.pop_back();   // error
    int n2 = v.back();  
    
    
}