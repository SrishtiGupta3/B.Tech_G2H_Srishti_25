// FACTORIAL OF  A GIVEN NUMBER
#include<stdio.h>
int main(){
    int N,i,fact;
    printf("Enter the value of number.");
    scanf("%d",&N);
    fact=1;
    for(i=1;i<=N;i++){
        fact=fact*i;
    }
    printf("Factorial of number is : %d",fact);
    return 0;
}
