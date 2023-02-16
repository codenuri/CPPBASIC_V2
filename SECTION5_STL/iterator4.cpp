#include <print>
#include <vector>

int main()
{
	std::vector v1 = {1, 2, 3, 4, 5};

//	auto p1 = v1.begin();
//	auto p2 = v1.end();

	auto p1 = v1.rbegin();
	auto p2 = v1.rend();

	while( p1 != p2 )
	{
		std::println("{}", *p1);
		++p1;
	}
}	