#include<stdio.h>
  int main(){
     char A;
     printf("Enter A character:-");
     scanf("%c",&A);
     if (A >= 'a' && A<= 'z'|| A>='A' && A<= 'Z'){
     if (A=='A'|| A=='a' || A=='E' || A=='e' ||  A=='I' || A=='i' || A=='O' || A=='o' || A=='U' || A=='u'){
        printf("It's a vowel:-\n");
     }
     else{
        printf("It's a Consonants:-\n");
     }
     }
     else{
        printf("Enter a valid character:-\n");
     }
     return 0;
  }