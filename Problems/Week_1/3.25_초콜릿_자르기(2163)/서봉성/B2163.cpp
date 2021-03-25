#include<iostream>

using namespace std;

int main(void) {
	int a, b;
	cin >> a >> b;
	if (a >= b)
		cout << (a - 1) + (b - 1) * a;
	else
		cout << (b - 1) + (a - 1) * b;
	return 0;

}