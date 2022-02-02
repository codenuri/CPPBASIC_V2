#include <iostream>
using namespace std;

int main()
{
    printf("%d\n", 3); // ÇÔ¼ö
    
    cout << 3;   // cout.operator<<(3)   => operator<<(int)
    cout << 3.4; // cout.operator<<(3.4)
    
    cout.operator<<(3);
    cout.operator<<(3.4);
    
}