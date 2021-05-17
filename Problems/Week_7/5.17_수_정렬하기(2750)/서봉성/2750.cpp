#include<iostream>
using namespace std;

int arr[1000];

void quicksort(int start, int end)
{
	if (start >= end) return;

	int pivot = arr[(start + end) / 2];
	int left = start;
	int right = end;

	while (left <= right)
	{
		while (arr[left] < pivot)
			left++;
		while (arr[right] > pivot)
			right--;
		if (left <= right)
		{
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			left++;
			right--;
		}
	}

	quicksort(start, right);
	quicksort(left, end);
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	quicksort(0, n-1);

	for (int i = 0; i < n; i++)
		cout << arr[i] << endl;
	return 0;
}
