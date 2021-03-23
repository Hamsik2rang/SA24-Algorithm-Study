#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c;
	
	cin >> a >> b >> c;
	
	cout << (a + b) % c << std::endl;
	cout << ((a % c) + (b % c)) % c << std::endl;
	cout << (a * b) % c << std::endl;
	cout << ((a % c) * (b % c) % c) << std::endl;

	return 0;
}