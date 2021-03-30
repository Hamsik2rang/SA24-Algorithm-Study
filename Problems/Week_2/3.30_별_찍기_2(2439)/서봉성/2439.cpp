#include<iostream>

using namespace std;

int main(void) {
	int a;
	cin >> a;
	for (int k = 1; k <= a; k++) {
		int blank = a - k;
		int star = k;
		while (blank-- > 0) {
			cout << " ";
		}
		while (star-- > 0) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;

}