#include<iostream>
using namespace std;

int main()
{
	int n, value;
	cin >> n;

	for (int i = n / 5; i >= 0; i--)
	{
		value = n - (i * 5);
		if (value % 3 == 0)
		{
			cout << i + value / 3;
			return 0;
		}
	}

	cout << -1;
	return 0;
}