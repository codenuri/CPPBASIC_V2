#include <iostream>
/*
#ifdef __cplusplus
//	#define NULL 0
	#define NULL 0L
#else
	#define NULL (void*)0
#endif
*/
void foo(int   n) { std::cout << "int"   << std::endl;}
void foo(void* p) { std::cout << "void*" << std::endl;}

void goo(char* p) { std::cout << "char*" << std::endl;}

int main()
{
	foo(0);  		// foo(int)
	foo((void*)0);	// foo(void*)
//	foo(NULL);	// 

//	goo(0);    // ok
//	goo(NULL); // void* => char* νμ
			   // C μΈμ΄ : ok, C++ : error

	foo(nullptr);
	goo(nullptr);
}