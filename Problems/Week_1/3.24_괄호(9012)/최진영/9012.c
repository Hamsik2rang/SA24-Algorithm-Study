#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char ps[50];
	int T;
	int a = 0;
	int b = 0;
	int i;
	scanf("%d", &T);
	for (i = 0; i <= T; i++)
	{
		a++;
		scanf("%c", &ps[a]);
		if (ps[a] = '(')
		{
			b = b + 1;
		}
		else if (ps[a] = ')')
		{
			b = b - 1;
		}
		if (b = 0)
			{
				printf("yes");
			}
			else if (b !=0)
			{
				printf("no");
			}
		a = 0;
		b = 0;
	}
		
}