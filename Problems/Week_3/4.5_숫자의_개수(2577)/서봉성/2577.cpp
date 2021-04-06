#include<iostream>

using namespace std;

int main(void) 
{
	int a, b, c, sum, count = 0;
	cin >> a >> b >> c;
	for (int i = 0; i <= 9; i++)
	{
		sum = a * b * c;
		while (sum > 0)
		{
			if (sum % 10 == i)
				count++;
			sum /= 10;
		}
		cout << count << endl;
		count = 0;
	}
	
	
	return 0;

}