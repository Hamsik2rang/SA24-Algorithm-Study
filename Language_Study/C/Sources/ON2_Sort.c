#include<stdio.h>
#include<stdlib.h>

void Swap(int* const a, int* const b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int AscendingOrder(int a, int b)
{
	// 왼쪽 인자가 작으면 1, 크면 0을 리턴
	return a < b;
}

int DescendingOrder(int a, int b)
{
	// 왼쪽 인자가 크면 1, 작으면 0을 리턴
	return a > b;
}

void BubbleSort(int arr[], int size, int(*comp)(int, int))
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (!comp(arr[j], arr[j + 1]))
			{
				Swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}

void SelectionSort(int arr[], int size, int(*comp)(int, int))
{
	for (int i = 0; i < size; i++)
	{
		int index = i;
		for (int j = i + 1; j < size; j++)
		{
			if (!comp(arr[index], arr[j]))
			{
				index = j;
			}
		}
		if (index != i)
		{
			Swap(&arr[index], &arr[i]);
		}
	}
}

void InsertionSort(int arr[], int size, int(*comp)(int, int))
{
	for (int i = 1; i < size; i++)
	{
		if (!comp(arr[i - 1], arr[i]))
		{
			int j = 0;
			while (comp(arr[j], arr[i]))
			{
				j++;
			}

			int temp = arr[i];
			for (int k = 0; k < i - j; k++)
			{
				arr[i - k] = arr[i - k - 1];
			}
			arr[j] = temp;
		}
	}
}

int main()
{
	int arr[10] = { 1,3,4,5,2,8,7,9,6,10 };

	//BubbleSort(arr, 10, AscendingOrder);
	//BubbleSort(arr, 10, DescendingOrder);
	//SelectionSort(arr, 10, AscendingOrder);
	//SelectionSort(arr, 10, DescendingOrder);
	//InsertionSort(arr, 10, AscendingOrder);
	//InsertionSort(arr, 10, DescendingOrder);

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}