#include<stdio.h>
    int main (){
      float A, B, C;
      printf("Enter First Number:-");
      scanf("%f",&A);
      printf("Enter Second Number:-");
      scanf("%f",&B);
      printf("Enter Third Number:-");
      scanf("%f",&C);
      if(A>B  && B>C){
        printf("A is maximum %f\n",A);
        printf("C is minimum %f\n",C);
        printf("B is middle number %f\n",B);
      }
      if (A>C && C>B){
        printf("A is maximum %f\n",A);
        printf("B is minimum %f\n",B);
        printf("C is middle number %f\n",C);
      }
      if (B>A && A>C){
        printf("B is maximum %f\n",B);
        printf("C is minimum %f\n",C);
        printf("A is middle number %f\n",A);
      }
      if (B>C && C>A){
        printf("B is maximum %f\n",B);
        printf("A is minimum %f\n",A);
        printf("C is Middle number %f\n",C);
      }
      if (C>A && C>B){
        printf("C is maximum %f\n",C);
        printf("B is minimum %f\n",B);
        printf("A is middle number %f\n",A);
      }
      if(C>B && B>A){
        printf("C is maximum %f\n",C);
        printf("A is minimum %f\n",A);
        printf("B is middle number %f\n",B);
      }
      return 0;
    }