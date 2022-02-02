#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    int n = 0;
    
    while( 1 )
    {
        cin >> n;        
        if ( n == -1 ) break;        
        v.push_back(n);    
    }
    
    replace_if( begin(v), end(v), 
            [](int n) { return n >= 10;}, 0);


    int sum = accumulate( begin(v), end(v), 0);

    //sort( begin(v), end(v)); // 오름차순, 퀵소트
                                // <
    sort( begin(v), end(v), 
        [](int a, int b) { return a > b; });
        

    fill( begin(v), end(v), 1);
    
    for ( auto& n : v)
        std::cout << n << ", ";
        
    std::cout << endl;
}







