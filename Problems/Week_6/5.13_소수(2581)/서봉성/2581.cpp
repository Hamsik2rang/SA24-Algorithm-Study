#include<iostream>
using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;
	int* arr = new int[n + 1];

	for (int i = 2; i <= n; i++)
		arr[i] = i;

	for (int i = 2; i <= n; i++)
	{
		if (arr[i] == 0)
			continue;
		for (int j = i + i; j <= n; j += i)
			arr[j] = 0;
	}

	int min = 0;
	for (int i = m; i <= n; i++)
	{
		if (arr[i] != 0) {
			min = arr[i];
			break;
		}
	}
	if (min == 0)
	{
		cout << -1;
		return 0;
	}

	int sum = 0;
	for (int i = m; i <= n; i++)
	{
		if (arr[i] != 0)
			sum += arr[i];
	}

	cout << sum << endl << min;
	return 0;	
}