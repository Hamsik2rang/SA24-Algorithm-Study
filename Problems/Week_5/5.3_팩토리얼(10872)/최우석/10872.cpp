#include <iostream>
using namespace std;

int main()
{
	int a, b;
	b = 1;
	cin >> a;

	for (int i = 1; i <= a; i++)
	{
		b *= i;
	}

	cout << b;

	return 0;
}
