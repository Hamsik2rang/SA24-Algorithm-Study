#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define max 100000

int N, A[max], M;
int bs(int target){
	int left = 0, right = N - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (A[mid] == target)
			return 1;
		else if (A[mid] < target)
			left = mid +1;
		else
			right = mid-1;
	}
	return 0;
}
int main() {
	int temp = 0,b;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &A[i]);
	for (int a = 0; a < N; a++)
		for (int b = 0; b < N - 1; b++){
			if (A[b] > A[b + 1]) {
				temp = A[b];
				A[b] = A[b + 1];
				A[b + 1] = temp;
			}
		}
	scanf("%d", &M);
	for (int k = 0; k < M; k++) {
		scanf("%d", &b);
		printf("%d\n", bs(b));
	}
	return 0;
}//시간초과로 실패