#include<stdio.h>

int main()
{
    int i,n,x,j,f;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    scanf("%d",&x);
    f=0;
    for(j=2;j<x;j++){
    if(x%j==0){
        f=1;
        break;
    }
    }
    if(f==0){
            printf("%d eh primo\n",x);
    }
    else
            printf("%d nao eh primo\n",x);
}
    return 0 ;
}

