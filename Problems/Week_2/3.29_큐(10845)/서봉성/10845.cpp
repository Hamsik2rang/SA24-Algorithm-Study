#include<iostream>
#include<string>

using namespace std;

int main(void) {
	int n1, n2, n3 = 1, top = -1, bottom = 0;
	string str;
	int queue[10000];
	cin >> n1;
	while (n3++ <= n1) {
		cin >> str;
		if (str == "push") {
			cin >> n2;
			queue[++top] = n2;
		}
		else if (str == "pop") {
			if (top - bottom == -1)
				cout << -1 << endl;
			else
				cout << queue[bottom++] << endl;
		}
		else if (str == "size") {
			cout << top - bottom + 1 << endl;
		}
		else if (str == "empty") {
			if (top - bottom == -1)
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else if (str == "front") {
			if (top - bottom == -1)
				cout << -1 << endl;
			else
				cout << queue[bottom] << endl;
		}
		else if (str == "back") {
			if (top - bottom == -1)
				cout << -1 << endl;
			else
				cout << queue[top] << endl;
		}
	}

	return 0;

}