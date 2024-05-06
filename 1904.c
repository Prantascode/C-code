#include<stdio.h>
int main()
{
    int n,i,l,total,c=0,r=0,s=0;
    char ch;
    float x,y,z;
    scanf("%d",&n);

    for(i = 0;i < n;i++){
        scanf("%d %c",&l,&ch);
        if(ch=='C')c = c+l;
         if(ch=='R')r = r+l;
        if(ch=='S') s = s+l;
    }
    total = c+r+s;
    x = (c*100.00)/total;
    y = (r*100.00)/total;
    z = (s*100.00)/total;

    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2f %%\n",x);
    printf("Percentual de ratos: %.2f %%\n",y);
    printf("Percentual de sapos: %.2f %%\n",z);
 return 0;

}
