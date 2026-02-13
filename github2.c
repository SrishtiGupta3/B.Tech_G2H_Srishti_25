#include<stdio.h>
int main(){
    int days,Y,M,Rd;
    printf("Enter the number of days.\n");
    scanf("%d",&days);
    Y=days/365;
     printf("The number of years is %d",Y);
    M=days/30;
    printf("The number of months is %d",M);
Rd=days%365;
printf("The number of remaining days  is %d",Rd);
return 0;
}