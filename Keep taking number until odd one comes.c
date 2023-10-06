#include<stdio.h>
  int main (){
      int n;
      do{
      printf("Enter The Value -:");
      scanf("%d",&n);
      printf("%d\n",n);
      if(n<=0){
          printf("Enter the valid value and re run the code-:");
          break;
      }
      if(n % 2 !=0){
          break;
      }
      
  }while(1);
  printf("Thank you");
  return 0;
  }
