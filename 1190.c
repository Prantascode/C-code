#include<stdio.h>

int main()
{
    double M[12][12],sum=0;
    char c[2];
    int i,j,n=1,m=10;
    scanf("%s",&c);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&M[i][j]);
        }
    }
    for(i=11;i>6;i--){
        for(j=n;j<=m;j++){
            sum += M[j][i];
        }
    n++;
    m--;
    }
    if(c[0]=='S')printf("%.1lf\n",sum);
    else printf("%.1lf\n",sum/30.0);

    return 0;
}
