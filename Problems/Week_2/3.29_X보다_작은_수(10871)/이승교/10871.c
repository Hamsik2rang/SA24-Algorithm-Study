#include <stdio.h>

int main()
{
    int n, x, i=0, t;

    scanf("%d %d",&n,&x);


    for(i=0;i<n;i++){
        scanf("%d",&t);
        if(t<x) printf("%d ",t);
    }

    return 0;
}
