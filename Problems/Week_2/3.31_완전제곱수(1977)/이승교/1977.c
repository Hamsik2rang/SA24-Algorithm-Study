#include <stdio.h>

int main()
{
    int n, m, k;

    scanf("%d\n%d",&n,&m);

    int min = m, sum = 0;

    for(int i=1;i*i<=m;i++){
        if(i*i>=n){
            k = i * i;
            sum = sum + k;
            if(k<=min) min = k;
        }
    }
    if(sum==0) printf("-1");
    else printf("%d\n%d",sum,min);


    return 0;
}
