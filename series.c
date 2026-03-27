#include<stdio.h>
#include<math.h>
int main(){
    int N,i;
    float sum;
    printf("Enter the value of number:");
    scanf("%d",&N);
    sum=0.0;
    for(i=1;i<=N;i++){
    sum=sum+1.0/i;}
printf("sum of series is :%.2f",sum);
return 0;
}
