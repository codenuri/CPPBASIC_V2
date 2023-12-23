#include <algorithm>
#include <print>

int main()
{
	int x[5] = {1, 3, 5, 2, 4};
	
	std::sort(x, x + 5);

	// C++20 부터 제공되는 버전
	std::ranges::sort(x, x + 5);
	std::ranges::sort(x);
}