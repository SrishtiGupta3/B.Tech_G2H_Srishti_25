#include<stdio.h>
int main(){
    int N1,N2;
    int i,j;
    printf("Enter the value of N1:");
    scanf("%d",&N1);
    printf("Enter the value of N2:");
    scanf("%d",&N2);
    int a[N1][N2];
    printf("Enter value of array:\n");
    for(i=0;i<N1;i++){
        for(j=0;j<N2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The array is :\n");
     for(i=0;i<N1;i++){
        for(j=0;j<N2;j++){
             printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}