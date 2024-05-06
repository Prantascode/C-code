#include<stdio.h>
int main()
{
    int L,i,j;
    double M[12][12],sum=0.0;
    char T[2];
    scanf("%d",&L);
    scanf("%s",&T);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
                scanf("%lf",&M[i][j]);
        }
    }

    for(i=0;i<12;i++){
            sum+=M[i][L];
    }
    if(T[0]=='S'){
    printf("%.1lf",sum);
    }else if(T[0]=='M'){
    printf("%.1lf",sum/12.0);
    }

    return 0;
}

