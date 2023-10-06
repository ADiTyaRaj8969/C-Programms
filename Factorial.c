#include<stdio.h>
int main(){
    int a,n,i;
    printf("Enter the number:-");
    scanf("%d",&n);
    a=1;
    for(i=1;i<=n;i++){
    a=a*i;
    }
    printf("%d\n",a);
    return 0;
}