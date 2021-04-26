#include <iostream>

int main()
{
	int stone;
	std::cin >> stone;

	std::cout << (stone & 1 ? "SK" : "CY");

	return 0;
}