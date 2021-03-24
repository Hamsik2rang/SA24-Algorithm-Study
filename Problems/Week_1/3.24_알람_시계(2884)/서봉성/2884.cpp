#include<iostream>
using namespace std;


int main(void) {
	int h, m;
	cin >> h >> m;
	if (m >= 45)
		m -= 45;
	else if (m < 45) {
		m += 15;
		h -= 1;
	}
	if (h < 0)
		h += 24;
	cout << h<<" "<<m;
	
	return 0;
}