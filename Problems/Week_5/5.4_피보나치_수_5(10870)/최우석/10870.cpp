#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	scanf("%d", &a);
	b = 0;
	c = 1;
	if(a>0)
	{
	
		for(int i = 1; i <= a - 1; i++)
		{	
			d = c;
			c = b + c;
			b = d;
		}
		printf("%d", c);
	}
	else
	{
		printf("0");	
	}
	
	
	return 0;
}
