#include <stdio.h>
#include <stdlib.h>

int main(void)
{  int A = 0, B = 0, C= 0;
   scanf("%d %d %d", &A, &B, &C);


   printf("%d\n",(A+B) % C);
   printf("%d\n",(((A % C) + (B % C)) % C));
   printf("%d\n",(A * B) % C);
   printf("%d\n",((A % C) * (B % C)) % C);


    return 0;
}
