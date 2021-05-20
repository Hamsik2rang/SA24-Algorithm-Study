#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

#define SWAP(type, a, b) {type temp = a; a = b; b = temp;}

int Solution(int arr[], int target, int size)
{
	int left = 0;
	int right = size - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (target == arr[mid])
		{
			return 1;
		}
		else if (target < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return 0;
}

int Partition(int arr[], int left, int right)
{
	int pivot = arr[left];
	int low = left + 1;
	int high = right;

	while (low <= high)
	{
		while (low <= right && pivot >= arr[low])
		{
			low++;
		}
		while (high > left && pivot <= arr[high])
		{
			high--;
		}

		if (low <= high)
		{
			SWAP(int, arr[low], arr[high]);
		}
	}
	SWAP(int, arr[left], arr[high]);

	return high;
}

void QSort(int arr[], int left, int right)
{
	if (left <= right)
	{
		int pivot = Partition(arr, left, right);
		QSort(arr, left, pivot - 1);
		QSort(arr, pivot + 1, right);
	}
}

int arr[100000], target[100000];

int main()
{
	int n, m;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	QSort(arr, 0, n - 1);

	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &target[i]);
	}

	for (int i = 0; i < m; i++)
	{
		printf("%d\n", Solution(arr, target[i], n));
	}

	return 0;
}