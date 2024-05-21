// print factorial number
 #include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("enter the number");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        printf("%d*",i);
        fact=fact*i;
    }
    printf("=%d",fact);
return 0;
}