#include <stdio.h>


int main()
{
    int a, b, c, sum, n;
    int k[10] = {0,};
    scanf("%d %d %d", &a,&b,&c);

    sum = a * b * c;


    while(sum>=1){
        n = sum % 10;
        sum = sum / 10;
        k[n]++;
    }


    for(int i=0; i<10; i++){
        printf("%d\n",k[i]);
    }

    return 0;
}
