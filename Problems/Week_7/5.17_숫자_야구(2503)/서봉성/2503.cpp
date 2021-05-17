#include<iostream>
using namespace std;

int n, num3[100], strike[100], ball[100];

int strike_cnt(int a, int b)
{
	int cnt = 0;
	if (a % 10 == b % 10) cnt++;
	if (a / 10 % 10 == b / 10 % 10) cnt++;
	if (a / 100 == b / 100) cnt++;
	return cnt;
}

int ball_cnt(int a, int b)
{
	int cnt = 0;
	int arr_a[3] = { a % 10, a / 10 % 10, a / 100 };
	int arr_b[3] = { b % 10, b / 10 % 10, b / 100 };
	bool have_strike[3] = { false, false, false };
	if (a % 10 == b % 10) have_strike[0] = true;
	if (a / 10 % 10 == b / 10 % 10) have_strike[1] = true;
	if (a / 100 == b / 100) have_strike[2] = true;
	for (int i = 0; i < 3; i++)
	{
		if (have_strike[i]) continue;
		for (int j = 0; j < 3; j++)
		{
			if (have_strike[j]) continue;
			if (i == j) continue;

			else if (arr_a[i] == arr_b[j])
			{
				cnt++;
				break;
			}
		}
	}
	return cnt;
}

int answer()
{
	int count = 0;
	int strike_count = 0, ball_count = 0;
	for (int i = 123; i <= 987; i++)
	{
		int n1 = i % 10;
		int n2 = i / 10 % 10;
		int n3 = i / 100;
		if (n1 == n2 || n2 == n3 || n3 == n1 || n1 == 0 || n2 == 0) continue;
		for (int j = 0; j < n; j++)
		{
			strike_count = strike_cnt(i, num3[j]);
			ball_count = ball_cnt(i, num3[j]);
			if (strike_count == strike[j] && ball_count == ball[j])
			{
				if (j == n - 1)
					count++;

				else
					continue;
			}
			else
				break;
		}
	}
	return count;
}


int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num3[i] >> strike[i] >> ball[i];
	}

	cout << answer();
	return 0;
}