#include<stdio.h>
int main()
{
    char parts;
    int front_right,front_left,back_right,back_left;
    int petrol;
    int distance,usage_petrol;
    printf("enter 'a' to know about the pressure and 'b' to know thw petrol:");
    scanf("%c",&parts);
    switch(parts){
        case 'a':
        printf("enter the pressure of every tiers:");
        scanf("%d",&front_right);
        if(front_right<35){
            printf("ALERT!! the pressure of front right tier is low\n");
        }
         else 
        printf("the tier pressure is good of front right");
        scanf("%d",&front_left);
        if(front_left<35){
            printf("ALERT!! the pressure of front_left tier is low\n");
        }
         else 
        printf("the tier pressure is good of front left");
        scanf("%d",&back_left);
        if(back_left<35){
             printf("ALERT!! the pressure of back right tier is low\n");
        }
         else 
        printf("the tier pressure is good of back left");
        scanf("%d",&back_right);
        if( back_right<35){
            printf("ALERT!! the pressure of back right tier is low\n");
        }
        else 
            printf("the tier pressure is good of back right\n");
            printf("enter the petrol:\n");
            scanf("%d",&petrol);
            if(petrol<5){
                printf("ALERT!!! level is low:");
            }
            else
                printf("good:");
    break;
    case 'b':
        printf("the avg of the distance of  and usage petrol trip is :");
        scanf("%d%d",&distance,&usage_petrol);
        int result=distance/usage_petrol;
        printf("the average of the trip is %d",result);
    }
    
    

return 0;
}