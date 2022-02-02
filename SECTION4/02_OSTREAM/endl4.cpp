#include <iostream>
using namespace std;

ostream& tab( ostream& os)
{
    os << '\t';
    return os;
}
ostream& menu( ostream& os)
{
    os << "1. ¼³··ÅÁ\n";
    os << "2. ±è¹ä\n";
    return os;
}

int main()
{
    cout << "A" << endl;
    cout << "A" << tab << "B" << endl;
    
    cout << endl; // cout.operator<<(ÇÔ¼öÆ÷ÀÎÅÍ)                
    cout << tab; 
    
    cout << menu;
}