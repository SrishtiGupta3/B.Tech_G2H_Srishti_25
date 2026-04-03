#include<stdio.h>
int main(){
    int r1,c1,r2,c2,k;
    int i,j,sum,sum1;
    int a[100][100],b[100][100],c[100][100];
    printf("Enter the 1st matrix order=\n");
    scanf("%d %d",&r1,&c1);
     printf("Enter the 2nd matrix order=\n");
    scanf("%d %d",&r2,&c2);
     if(r2!=c1)
     {
            printf("Multiplication not possible");
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
             printf("%d\t",a[i][j]);
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
 printf("Multiplication of Matrix is:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            c[i][j]=0;
            for(k=0;k<c1;k++)
            {
          c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
          printf("%d\t",c[i][j]);
        }
         printf("\n");
    }
}
    return 0;
}
