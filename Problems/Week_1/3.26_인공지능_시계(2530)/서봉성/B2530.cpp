#include<iostream>
using namespace std;

int main(void) {
	int a, b, c, d;
	cin >> a >> b >> c;
	cin >> d;
	c += d;
	while (c >= 60) {
		b += (c / 60);
		c %= 60;
	}
	while (b >= 60) {
		a += (b / 60);
		b %= 60;
	}
	while (a >= 24) {
		a -= 24;
	}
	cout << a << " " << b << " " << c;
	return 0;
}