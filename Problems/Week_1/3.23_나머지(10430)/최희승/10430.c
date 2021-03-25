#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int A, B, C; 
	scanf_s("%d", &A);
	scanf_s("%d", &B);
	scanf_s("%d", &C);

	printf("%d\n", (A + B) % C);
	printf("%d\n", ((A % C) + (B % C)) % C);
	printf("%d\n", (A * B) % C);
	printf("%d\n", ((A % C) * (B % C)) % C);
	
	return 0;
}