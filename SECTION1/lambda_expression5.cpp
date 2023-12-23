#include <algorithm>
#include <print>

void foo(int n) 
{
	if ( n < 40 )
//	if ( n < pass ) // ?
		std::println("{}", n);
}

int main()
{
	int score[5] = {95, 35, 63, 72, 22};
	
	int pass = 70; 

	// 점수가 pass 미만을 출력하고 싶다.
//	std::for_each(score, score + 5, foo);

	std::for_each(score, score + 5, 
			[pass] (int n) { if ( n < pass ) 
						  std::println("{}", n);
						}  );
}
