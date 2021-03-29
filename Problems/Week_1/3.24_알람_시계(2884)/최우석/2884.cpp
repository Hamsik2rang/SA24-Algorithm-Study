#include <iostream>
using namespace std;

void time(int a, int b)
{
	int* c = &b;
	if (b - 45 < 0) {
		if (a - 1 < 0)
		{
			a = 24;
		}
		*c = 60 + (b - 45);
		cout << a - 1 << ' ' << b << std::endl;
	}
	else if (b - 45 >= 0) {
		cout << a << ' ' << b - 45 << std::endl;
	}
}

int main(void)
{

	int h, m;
	cin >> h >> m;
	time(h, m);
	return 0;
}