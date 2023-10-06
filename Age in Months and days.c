#include<stdio.h>
   int main(){
    int Year,Month,Days;
    printf("Enter age:-");
    scanf("%d",&Year);
    Month = Year * 12 ;
    printf("Age in Month :- %d\n",Month);
    Days = Year * 365 ;
    printf("Age in Days :- %d",Days);
    return 0;
   }
