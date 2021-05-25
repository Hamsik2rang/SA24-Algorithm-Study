#pragma warning(disable:4996)
#include <stdio.h>

#define MAX_DIGIT 19

#define GetInt(t) (t-'0')

typedef long long int int64_t;
typedef struct _BigInt BigInt;
typedef BigInt* BigIntPtr;

struct _BigInt
{
	int64_t num[(800 + MAX_DIGIT)/MAX_DIGIT];
	size_t length;
};

void InitBInt(BigIntPtr b, char* num, size_t length)
{
	b->length = length;
}

void SumBInt(const BigIntPtr b1, const BigIntPtr b2)
{

}

void MulBInt(const BigIntPtr b1, const BigIntPtr b2)
{

}

int main()
{
	

	return 0;
}