#include<iostream>
#include<queue>
using namespace std;


int main()
{
	int n;
	cin >> n;
	queue < long > a;
	a.push(0);
	long max = 1;

	for (int i = 0; i < n-1; i++)
	{
		a.push(max);
		max += a.front();
		a.pop();
	}

	cout << (max * 4) + (a.front() * 2);
}