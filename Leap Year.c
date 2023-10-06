#include <stdio.h>

int main() {
   int YEAR;
    printf("Enter a Year -:");
    scanf("%d",&YEAR);
    if (YEAR < 0){
        printf("ENTER A VALID YEAR-:");
    }
   else if (YEAR%4==0){
        printf(" IT'S A LEAP  YEAR-: ");
    }
    else{
        printf(" NOT A LEAP YEAR-: ");
    }
     return 0;
}