#include<stdio.h>
int main(){
    int n,rem,reverse;
    printf("enter value of number:");
    scanf("%d",&n);
    reverse=0;
    while(n!=0){
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    printf("reversed number is :%d",reverse);
    return 0;
}
  