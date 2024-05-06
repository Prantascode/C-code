#include <stdio.h>

int main() {
   int t,pa,pb,i,y;
   double g1,g2;

   scanf("%d",&t);
   for(i=0;i<t;i++){
        y=0;
       scanf("%d %d %lf %lf",&pa,&pb,&g1,&g2);
       while(pa<=pb){
        pa = pa + ((pa*g1)/100);
        pb = pb + ((pb*g2)/100);
        y++;
        if(y>100){
            printf("Mais de 1 seculo\n");
            break;
        }
       }
    if(y<=100)
            printf("%d anos.\n",y);
   }
    return 0;
}

