#include <stdio.h>

int main() {
   int marks;
   printf("Enter Your Marks 0 to 100 :  ");
   scanf("%d",&marks);
   if(marks<=100 && marks>=90){
       printf("GRADE A -:EXCELLENT\n");
   }
    else if (marks<90 && marks>=70){
        printf("GRADE B -:SATISFACTORY\n");
    }
    else if (marks<70 && marks>=50){
        printf("GRADE C -:AVERAGE\n");
    }
    else if (marks<50 && marks>= 30){
        printf("GRADE D -:NEED HARD WORK\n");
    }
    else if (marks<30 && marks>=0){
        printf("GRADE E -: FAIL\n");
    }
    else {
        printf("Enter a valid number -:");
    }
     return 0;
}