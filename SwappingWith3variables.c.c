#include <stdio.h>

#include<stdio.h>
   int main(){
    float Number1,Number2,Varry;
    printf("Enter the first value:-");
    scanf("%f",&Number1);
    printf("Enter the second value :-");
    scanf("%f",&Number2);
    Varry = Number1 ;
    Number1 = Number2;
    Number2 = Varry ;
    printf("After Swapping\n");
    printf("First Number is %f\n",Number1);
    printf("Second Number is %f\n",Number2);
    return 0;
   }
