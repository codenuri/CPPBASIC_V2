#include <algorithm>
#include <print>

int main()
{
	int x[5] = {1, 3, 5, 2, 4};
	
	std::sort(x, x + 5);

	for(int i = 0; i < 5; i++)
		std::println("{}", x[i] );
}
