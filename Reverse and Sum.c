#include<stdio.h>
    int main(){
        int n ;
        printf("Enter the Value:-");
        scanf("%d",&n);
        if(n<=0){
            printf("Enter a Valid No. :-");
        }
        int sum = 0;
        for(int j=n;j>=1;j--){
            sum = sum +j;
            printf("%d\n",j);
        }
        printf("sum is %d\n",sum);
        return 0;
    }