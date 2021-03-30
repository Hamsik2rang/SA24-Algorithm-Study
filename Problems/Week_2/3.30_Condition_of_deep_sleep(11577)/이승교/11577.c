#include <stdio.h>

int main()
{
    int n, k, a[100000], cnt=0;

    scanf("%d %d",&n,&k);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int j=0;j<=n-k;j++){
        if(a[j]==1){
            cnt++;

            for(int x=0; x<k; x++){
                if(a[j+x]==1) a[j+x]=0;
                else a[j+x]=1;

            }
        }
    }

    int chk=0;
    for(int i=0;i<n;i++){
        if(a[i]==1) chk=1;
    }

    if(chk==1) printf("Insomnia");
    else printf("%d",cnt);

    return 0;
}

