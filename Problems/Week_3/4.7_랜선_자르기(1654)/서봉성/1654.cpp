#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int k, n;


bool check(int& cut, vector<int> &a)
{
	int count = 0;
	for (const auto &i : a) 
	{
		count += i / cut;
	}
	if (count >= n)
		return true;
	else
		return false;
}

int main() {
	cin >> k >> n;
	vector<int> lan(k);

	for (int i = 0; i < k; i++)
		cin >> lan[i];
	sort(lan.begin(), lan.end());

	int start = 0, max = lan.back();
	

	while (start + 1 < max)
	{
		int mid = (start + max) / 2;
		if (check(mid, lan))
			start = mid;
		else
			max = mid;
	}
	
	cout << start;

	return 0;

}