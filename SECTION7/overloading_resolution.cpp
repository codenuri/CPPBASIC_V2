#include <iostream>
using namespace std;

struct FLOAT
{
    FLOAT(float f) {} // 痕発 持失切..
};

//template<typename T> 
//void foo( T )      { cout << "T"      << endl;}
//void foo( int )    { cout << "int"    << endl;}
//void foo( char )   { cout << "char"   << endl;}
//void foo( double ) { cout << "double" << endl;}
//void foo( float )  { cout << "float"  << endl;}
//void foo( FLOAT )  { cout << "FLOAT"  << endl;}
void foo( ... )    { cout << "..."    << endl;}

int main()
{
    float f = 3.4f;
    foo(f); // ?
    
    //FLOAT FL(f); // FLOAT FL = f;
}







