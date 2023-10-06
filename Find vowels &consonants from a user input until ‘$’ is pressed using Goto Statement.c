#include <stdio.h>
    int main() { 
    char Character;
    start:
     printf("Enter A Character or $ to end:-");
     scanf("%c",&Character);
     if(Character=='$')
        goto end;
     if ((Character >= 'a' && Character <= 'z') || (Character >= 'A' && Character <= 'Z')){
         if  (Character=='A'|| Character=='a' || Character=='E' || Character=='e' ||  Character=='I' || Character=='i' || Character=='O' || Character=='o' || Character=='U' || Character=='u'){
            printf("It's a Vowel:-\n");}
            else{
            printf("It's a Consonant:-\n");
     }
     }
       goto start;
    end :
        printf("Thank You:-");
        return 0;   
     }