#include<stdio.h>
int main()
{
    int i,j,max1[2][2],max2[2][2],sum[2][2];
    printf("enter the valuefor executing the matrix:");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&max1[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&max2[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            sum[i][j]=max1[i][j]+max2[i][j];
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d  ",sum[i][j]);
        }
        printf("\n");
    }
    
return 0;
}