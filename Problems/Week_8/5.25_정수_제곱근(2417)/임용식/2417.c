#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

typedef unsigned long long uint64_t;

uint64_t BinarySearch(uint64_t, uint64_t, uint64_t);

int main()
{
	uint64_t n;
	unsigned int temp = 0;
	uint64_t right = (temp - 1);
	uint64_t left = 0;
	scanf("%llu", &n);

	printf("%llu", BinarySearch(left, right, n));

	return 0;
}

uint64_t BinarySearch(uint64_t left, uint64_t right, uint64_t target)
{
	if (left > right)
	{
		return left;
	}
	uint64_t mid = (left + right) / 2;
	uint64_t pow = mid * mid;
	if (pow == target)
	{
		return mid;
	}
	else if (pow < target)
	{
		return BinarySearch(mid + 1, right, target);
	}
	else
	{
		return BinarySearch(left, mid - 1, target);
	}
}