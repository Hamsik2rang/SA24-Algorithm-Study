#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c, d, e, f;
	int i = 1;
	cin >> a;

	b = a / 10;
	c = a % 10;
	d = b;
	e = c;
	while (1)
	{
		f = c;
		c = (b + c) % 10;
		b = f;
		if (b == d && c == e)
		{
			cout << i;
			break;
		}
		
		i += 1;
	}

	return 0;
}
