#include <iostream>
using namespace std;

int main(void)
{
	int a;
	cin >> a;

	for (int b = 0; b < a; b++)
	{
		for (int c = 0; c < a-b-1; c++)
		{
			cout << ' ';
		}
		
		for (int d = 0; d < b + 1; d++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}