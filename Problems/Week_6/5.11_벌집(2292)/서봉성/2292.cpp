#include<iostream>
using namespace std;


int main()
{
	int n, count = 0;
	cin >> n;

	n -= 1;
	while (n > 0)
	{
		count += 1;
		n -= count * 6;
	}
	cout << count + 1;
	return 0;
}