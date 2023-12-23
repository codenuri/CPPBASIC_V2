#include <algorithm>
#include <print>

bool cmp(int a, int b) { return a > b; }

int main()
{
	int x[5] = {1, 3, 5, 2, 4};

//	std::sort(x, x + 5); // 1, 2, 3, 4, 5

//	std::sort(x, x + 5, cmp); // 5, 4, 3, 2, 1


	std::sort(x, x + 5, 
		[](int a, int b) { return a > b; } );


	for(int i = 0; i < 5; i++)
		std::println("{}", x[i] );
}
