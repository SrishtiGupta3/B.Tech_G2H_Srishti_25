#include<stdio.h>
int main(){
int N,n2,i,j,n;
n=0;
n2=0;
    printf("Enter the size of square 2darray:");
    scanf("%d",&N);
    int a[N][N];
printf("Enter array elemnts:\n");
for(i=0;i<N;i++){
    for(j=0;j<N;j++){
        printf("a[%d][%d]:",i,j);
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<N;i++){
    for(j=0;j<N;j++){
if(i==j){
    n=n+a[i][j];
}
if(i+j==N-1){
    n2=n2+a[i][j];
}
    }
}
printf("The sum of diagonal elemnts are :%d",(n+n2));
return 0;
}