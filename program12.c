// Sum of all numbers up to a given number
#include<stdio.h>
int main(){
    int n,i,sum;
    printf("Enter the Number:");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("Sum of all numbers up to a given number is: %d",sum);
}
