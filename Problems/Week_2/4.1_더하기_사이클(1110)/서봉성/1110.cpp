#include<iostream>

using namespace std;

int main(void) {
	int a, b = -1, c, count = 0;
	cin >> a;
	c = a;
	while (a != b) {
		b = (c / 10 + c % 10) % 10 + (c % 10 * 10);
		c = b;
		count++;
	}
	cout << count;
	return 0;

}