#include<stdio.h>

int main()
{
    int N[1000],t,x=0,i;
    scanf("%d",&t);
          for(i=0;i<1000;i++){
                printf("N[%d]= %d\n",i,x);
                x++;
                if(x==t)x=0;
    }

    return 0;
}
