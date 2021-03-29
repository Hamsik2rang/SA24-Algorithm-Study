#include<iostream>

using namespace std;

int main(void) {
	int n, x;
	cin >> n >> x;
		for (int k = 1; k <= n; k++) {
			int a=1;
			cin >> a;
			if (a < x)
				cout << a << " ";
		}
	return 0;
}