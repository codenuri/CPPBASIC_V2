#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    int n = 0;
    
    while( 1 )
    {
        cin >> n;
        
        if ( n == -1 )
            break;
            
        v.push_back(n);    
    }
    
    /*
    for ( auto& n : v)
    {
        if ( n >= 10 )
            n = 0;
    }
    */
    //replace( begin(v), end(v), 10, 0);
    
    replace_if( begin(v), end(v), 
            [](int n) { return n >= 10;}, 0);



    for ( auto& n : v)
        std::cout << n << ", ";
        
    std::cout << endl;
}







