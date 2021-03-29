#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c, d;
	cin >> a >> b >> c;
	cin >> d;
	c = c + d;

	(c >= 60) ? a += c / 3600, c = c % 3600, b += c / 60, c = c % 60 : c = c;
	(b >= 60) ? a += b / 60, b = b % 60 : b = b;
	(a >= 24) ? a = a % 24 : a = a ;

	cout << a << ' ' << b << ' ' << c;
	return 0;
}