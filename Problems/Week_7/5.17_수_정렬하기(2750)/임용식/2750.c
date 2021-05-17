#pragma warning(disable:4996)
#include <stdio.h>

void PrintSelectionSort(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int index = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[index] > arr[j])
			{
				index = j;
			}
		}
		if (index != i)
		{
			arr[index] ^= arr[i];
			arr[i] ^= arr[index];
			arr[index] ^= arr[i];
		}
		printf("%d\n", arr[i]);
	}
}

int main()
{
	int arr[1001] = { 0 };
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	PrintSelectionSort(arr, n);

	return 0;
}