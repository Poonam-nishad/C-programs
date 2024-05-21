#include<stdio.h>
void hello(int a){
     printf("%d",a);
}
int main()
{
    int a=30;
    hello(&a);
return 0;
}