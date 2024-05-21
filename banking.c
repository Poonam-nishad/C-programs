#include<stdio.h>
int main()
{
    char name;
    char choice;
    int password,option,first,second,new_password;
    int total_balance=5000;
    int new_total,amount;
    printf("enter the user name and the password:");
    scanf("%c%d",&name,&password);
    printf("option:\n1.balance enquiry \n2.Last two transaction \n3.Password change \n4.Transfer");
    scanf("%d",&option);
    switch(option){
        case 1:
           printf("your total balance is %d",total_balance);
           break;
        case 2:
           printf("enter the first and second transation balance:");
           scanf("%d%d",&first,&second);
           printf("your first transation is %d \n your second transation is %d",first,second);
           break;
        case 3:
           
         //   printf("do you want to change the password then enter in('y'or 'n')");
         //   scanf("%c",&choice);
         //   if(choice=='y'){
            printf("enter the new password");
            scanf("%d",&new_password);
            printf("your new password is %d",new_password);
         //   }
         //   else
         //   printf("ok! you dont want to change");
         break;
         case 4:
           printf("enter the amount to transfer");
           scanf("%d",&amount);
           new_total=total_balance-amount;
           printf("you transfer %d rs and now you available is %d",amount,new_total);
           break;
 }
return 0;
}