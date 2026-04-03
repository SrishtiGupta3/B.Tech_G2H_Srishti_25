#include<stdio.h>
int main(){
    int r1,c1,r2,c2,r3,c3;
    int i,j,sum,sum1;
    int a[100][100],b[100][100],c[100][100];
    printf("Enter the 1st matrix order=");
    scanf("%d %d",&r1,&c1);
     printf("Enter the 2nd matrix order=");
    scanf("%d %d",&r2,&c2);
     if((r1!=r2)||(c1!=c2))
     {
            printf("addition not posiible");
    }
else{
    printf("Enter values of 1st array:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter value of 2nd array:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("The array is :\n");
     for(i=0;i<r1;i++)
     {
        for(j=0;j<c1;j++)
        {
             printf(" %d ",a[i][j]);
        }
             printf("\n");   
    }
            printf("The array is :\n");
     for(i=0;i<r2;i++)
     {
        for(j=0;j<c2;j++)
        {
             printf(" %d ",b[i][j]);
        }
            printf("\n");   
     }
 printf("The 3rd array which contains the sum of elemnts of 1st and 2nd array is:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
          c[i][j]=a[i][j]+b[i][j];
          printf("%d\t",c[i][j]);
        }
         printf("\n");
    }
}
    return 0;
}
