#include <algorithm>
#include <print>

bool cmp(int a, int b) { return a > b; }

int main()
{
	int x[5] = {1, 3, 5, 2, 4};

	std::sort(x, x+5, 
//		[](int a, int b) { return a>b;} );
		[](int a, int b) -> bool { return a>b;} );
	


}
