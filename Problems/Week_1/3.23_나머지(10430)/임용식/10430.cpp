#include <iostream>


int main()
{
	int32_t a, b, c;

	std::cin >> a >> b >> c;

	std::cout << (a + b) % c << '\n';
	std::cout << ((a % c) + (b % c)) % c << '\n';
	std::cout << (a * b) % c << '\n';
	std::cout << ((a % c) * (b % c)) % c << '\n';

	return 0;
}