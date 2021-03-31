#include<iostream>

using namespace std;

int main(void) {
	int m, n, i = 0, a = 0;
	int arr[101];
	cin >> m >> n;
	for (int k = 1; k <= 100; k++) {
		if ((k * k) >= m && (k * k) <= n) {
			a += (k * k);
			arr[i++] = (k * k);
		}
	}
	if (i == 0)
		cout << -1;
	else
		cout << a << endl << arr[0];

	return 0;

}