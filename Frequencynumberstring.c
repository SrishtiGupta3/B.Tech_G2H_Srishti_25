#include<stdio.h>
int main(){
int N,N2,i,j,n3,n;
n=0;
    printf("Enter the size of 2darray:");
    scanf("%d",&N);
    scanf("%d",&N2);
    int a[N][N2];
printf("Enter array elemnts:\n");
for(i=0;i<N;i++){
    for(j=0;j<N2;j++){
        printf("a[%d][%d]:",i,j);
        scanf("%d",&a[i][j]);
    }
}
printf("Enter the number:");
scanf("%d",&n3);
for(i=0;i<N;i++){
    for(j=0;j<N2;j++){
if(n3==a[i][j+1]){
    n=n+1;
}
    }
}
printf("The frequency of a number are:%d",n);
return 0;
}