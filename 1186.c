#include<stdio.h>

int main()
{
    double M[12][12],sum =0;
    char c [2];
    int i,j,n=11;
    scanf("%s",&c);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&M[i][j]);
        }
    }
    for(i=1;i<12;i++){
        for(j=n;j<12;j++){
            sum+=M[i][j];
        }
        n--;
    }
    if(c=='S')printf("%.1lf\n",sum);
    else printf("%.1lf\n",sum/66.0);

    return 0;
}
