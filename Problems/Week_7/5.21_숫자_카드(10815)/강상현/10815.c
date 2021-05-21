#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define max 500000

int N, A[max], M;

int bs(int target) {
	int l = 0, r = N - 1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (A[mid] == target)
			return 1;
		else if (A[mid] < target)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return 0;
}

int p(int list[], int left, int right) {
	int pi, temp, low, high;

	low = left;
	high = right;
	pi = list[left];
	while (low < high) {
		while (list[low] < pi) {
			low++;
		}
		while (list[high] > pi) {
			high--;
		}

		if (low < high) {
			temp = list[low];
			list[low] = list[high];
			list[high] = temp;
		}
	}

	temp = list[low];
	list[low] = list[high];
	list[high] = temp;

	return high;
}

void qs(int list[], int left, int right) {
	if (left < right) {
		int q = p(list, left, right);

		qs(list, left, q - 1);
		qs(list, q + 1, right);
	}
}

int main() {
	int b;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &A[i]);

	qs(A, 0, N - 1);

	scanf("%d", &M);

	for (int k = 0; k < M; k++) {
		scanf("%d", &b);
		printf("%d ", bs(b));
	}

	return 0;
}