#include <iostream>
#include <list>
#include <vector>

int main()
{
    std::list<int> s1;
    std::list<int> s2(10); // 10개를 0으로 초기화
    
    std::list<int> s3(10,3); // 10개 3으로 초기화
    std::list<int> s4{10,3}; // 2개를 10, 3으로 초기화
    std::list<int> s5 = {10,3};    
    
    std::list<int> s6 = {1,2,3,4,5,6,7,8,9,10};
    std::list<int> s7{1,2,3,4,5,6,7,8,9,10};    
    
    std::list s8 = {1,2,3,4,5,6,7,8,9,10}; 
}