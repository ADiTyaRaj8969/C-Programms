#include<stdio.h>
    int main (){
        int n ;
        printf("Enter the value :-");
        scanf ("%d",&n);
        if(n<=0) {
        printf("jao laude natural no. pdh k aao");  
        }
        int sum = 0;
        
        if(n>0)  {
        
        for (int i = 0; i <= n; i++){
            sum = sum + i;
        }
        printf("sum is %d\n",sum);
        
        for(int i = n ; i>=1;i--){
            printf("%d\n",i);
        }
        }
        return 0;
    }