#include <print>

int main()
{
	auto add = [](int a, int b) { return a + b;};

	int ret = add(1, 2);

	std::println("{}", ret); // 3
}
