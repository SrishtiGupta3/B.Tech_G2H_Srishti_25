#include<stdio.h>
#include<math.h>
int main(){
int N,i,j,n,n2,sum,sum2;
printf("enter the value of n and n2:");
scanf("%d %d",&n,&n2);
int a[100][100];
printf("Enter array elemnts:\n");
for(i=0;i<n;i++){
    for(j=0;j<n2;j++){
        printf("a[%d][%d]:",i,j);
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<n;i++){
    sum=0;
    for(j=0;j<n2;j++){
     sum=sum+a[i][j];
    }
    printf("\nROW %d sum is:%d",i+1,sum);
}
for(j=0;j<n;j++){
    sum2=0;
    for(i=0;i<n2;i++){
     sum2=sum2+a[i][j];
    }
    printf("\nColumn %d sum is %d",j+1,sum2);
}
return 0;
}
   