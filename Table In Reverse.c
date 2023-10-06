#include<stdio.h>
int main(){
    int n,a ;
    printf("Enter the Value");
    scanf("%d",&n);
    for(int i = 10;i>=1;i--){
        a= n * i;
        printf("%d\n",a);
    }
    return 0;
}