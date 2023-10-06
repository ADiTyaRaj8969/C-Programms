#include <stdio.h>

#include<stdio.h>
   int main(){
    float Number1,Number2;
    printf("Enter the first value:-");
    scanf("%f",&Number1);
    printf("Enter the second value :-");
    scanf("%f",&Number2);
    Number1 = Number2;
    Number2 = Number1 ;
    printf("After Swapping\n");
    printf("First Number is %f\n",Number1);
    printf("Second Number is %f\n",Number2);
    return 0;
   }
