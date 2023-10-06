#include<stdio.h>
    int main (){
        float Avg,A,B,C;
        printf("Enter the First value:");
        scanf("%f",&A);
        printf("Enter the second value:");
        scanf("%f",&B);
        printf("Enter the third value:");
        scanf("%f",&C);
        Avg = (A + B + C)/3 ;
        printf ("Ans is %f",Avg);
        return 0;
    }
    