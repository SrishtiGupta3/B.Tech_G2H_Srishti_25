#include<stdio.h>
int main(){
    int N1,N2;
    int i,j;
    int a[100][100];
    printf("Enter the matrix order=");
    scanf("%d%d",&N1,&N2);
    printf("Enter value of array:\n");
    for(i=0;i<N1;i++){
        for(j=0;j<N2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The array is :\n");
     for(i=0;i<N1;i++){
        for(j=0;j<N2;j++){
             printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("the tranpose of a matrix is:\n");
     for(i=0;i<N2;i++){
        for(j=0;j<N1;j++){
             printf("%d\t",a[j][i]);
        }
        printf("\n");
     }
    return 0;
}