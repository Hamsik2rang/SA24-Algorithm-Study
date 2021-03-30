#include<iostream>
#include<string>

using namespace std;
int deque_val, front_val = 9999, back_val = 9999;
int arr[20000];

int push_f(void) {
	cin >> deque_val;
	return deque_val;
}

int push_b(void) {
	cin >> deque_val;
	return deque_val;
}

void pop_f(void) {
	if (front_val == back_val) 
		cout << -1 << endl;
	
	else 
		cout << arr[front_val++] << endl;
	
}

void pop_b(void) {
	if (front_val == back_val)
		cout << -1 << endl;

	else
		cout << arr[--back_val] << endl;

}

void quede_empty(void) {
	if (front_val == back_val)
		cout << 1 << endl;

	else
		cout << 0 << endl;

}

void quede_front(void) {
	if (front_val == back_val)
		cout << -1 << endl;

	else
		cout << arr[front_val] << endl;

}

void quede_back(void) {
	if (front_val == back_val)
		cout << -1 << endl;

	else
		cout << arr[back_val - 1] << endl;

}


int main(void) {
	int n;
	string str1;

	cin >> n;
	while (n-- > 0) {
		cin >> str1;
		if (str1 == "push_front")
			arr[--front_val] = push_f();

		else if (str1 == "push_back")
			arr[back_val++] = push_b();

		else if (str1 == "pop_front")
			pop_f();

		else if (str1 == "pop_back")
			pop_b();

		else if (str1 == "size")
			cout << back_val - front_val << endl;

		else if (str1 == "empty")
			quede_empty();

		else if (str1 == "front")
			quede_front();

		else if (str1 == "back")
			quede_back();
	}


	return 0;

}