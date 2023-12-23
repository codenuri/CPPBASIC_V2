#include <algorithm>
#include <print>

void foo(int n) 
{
	if ( n < 40 )
		std::println("{}", n);
}

int main()
{
	int score[5] = {95, 35, 63, 72, 22};

	std::for_each(score, score + 5, foo);
}
