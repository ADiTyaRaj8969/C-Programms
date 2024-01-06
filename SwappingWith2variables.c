#include <stdio.h>

#include<stdio.h>
   int main(){
    float a,b;
    printf("Enter the first value:-");
    scanf("%f",&a);
    printf("Enter the second value :-");
    scanf("%f",&b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After Swapping\n");
    printf("First Number is %f\n",Number1);
    printf("Second Number is %f\n",Number2);
    return 0;
   }
