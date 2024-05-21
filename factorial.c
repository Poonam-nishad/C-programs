#include<stdio.h>
int main()
{
    int n,num1=0,num2=1,num3,i;
    printf("Enter the number till you want to print fact:");
    scanf("%d",&n);
    num3=num1+num2;
    printf("%d %d %d ",num1,num2 ,num3);
    for(i=2;i<=n;i++){
        num1=num2;
        num2=num3;
        num3=num1+num3;
        printf("%d ",num3);
    }
return 0;
}