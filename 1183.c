#include<stdio.h>
int main()
{
    int n=1,i,j;
    double M[12][12],sum=0.0;
    char T[2];
    scanf("%c",&T);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
                scanf("%lf",&M[i][j]);
        }
    }

    for(i=0;i<12;i++){
        for(j=n;j<12;j++)
                sum+=M[i][j];
    n++;

    }
    if(T[0]=='S'){
    printf("%.1lf\n",sum);
    }else if(T[0]=='M'){
    printf("%.1lf\n",sum/66.0);
    }

    return 0;
}


