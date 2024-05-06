#include<stdio.h>

int main()
{
    int n,x,y,i,j,c,sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d",&x,&y);
        if(x%2==0)
            x = x+1;
            c=0;
            sum=0;
        for(j=x;j;j = j+2){
            c++;
            if(c>y)break;
            sum+=j;

          }
           printf("%d",sum);
    }
    return 0;
}
