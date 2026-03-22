// SUM OF DIGITS OF A NUMBER
#include<stdio.h>
int main(){
    int N,r,sum;
    printf("Enter value of number:");
    scanf("%d",&N);
    sum=0;
    while(N!=0){
        r=N%10;
        sum=sum+r;
        N=N/10;
    }
    printf("Sum of digits of a number is:%d",sum);
    return 0;
}