#include<stdio.h>

int main()
{
    int n,x,y,i,j,c,sum;
    for(i=1; ;i++){
        scanf("%d",&x);
        if(x==0)break;
        if(x%2!=0)
            x+=1;
            c=0;
            sum=0;
        for(j=x; ;j = j+2){
            c++;
            if(c>5)break;
            printf("%d ",j);
            sum+=j;

          }
           printf("%d\n",sum);
    }
    return 0;
}
