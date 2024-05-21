#include<stdio.h>
int main()
{
    int number,count=0;
    printf("Enter the number for count the digit:");
    scanf("%d%d",&number,&i);
    while(number>10){
        i++;
        number=number/10;
        printf("count=%d \n",number);
    }
    
return 0;
}