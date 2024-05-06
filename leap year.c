#include<stdio.h>

int main(void){

    int year;
    printf("Enter The Year-");
    scanf("%d",&year);

    int isleapyear = 0;

    if((year%4 == 0)&&(year%100!=0)||(year%400 == 0)){
        isleapyear = 1;
    }
    if (isleapyear){
        printf("%d is Leap Year\n",year);
    }
    else{
        printf("%d is not leap year",year);
    }

return 0;
}
