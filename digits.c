#include<stdio.h>
int main(){
    int num,n;
    printf("enter value of n:");
    scanf("%d",&num);
    n=0;
    while(num!=0){
        num=num/10;
        n=n+1;
    }
printf("The digits are  %d",n);
return 0;
}