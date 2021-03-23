#include <stdio.h>

int main()
{    
int A=5
int B=8
int C=4
    
		printf("%d", (A+B)%C);
		printf("%d", ((A%C) + (B%C))%C);
		printf("%d", (A*B)%C);
		printf("%d", ((A%C) * (B%C))%C);
	
return 0;
}
		
