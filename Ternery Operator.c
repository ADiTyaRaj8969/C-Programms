#include <stdio.h>

int main() {
   int age;
   printf("Enter Your Age");
   scanf("%d",&age);
   age>=18?printf("Adult\n"):printf("Not an adult\n");
     return 0;
}