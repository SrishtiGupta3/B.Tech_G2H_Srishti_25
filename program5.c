// SWAPPING
#include<stdio.h>
int main(){
    int a,b,c;
printf("Enter two integers \n");
scanf("%d %d",&a,&b);
printf("\nBefore swapping : \na=%d \nb=%d",a,b);
c=a;
a=b;
b=c;
printf("\nAfter swapping :\na=%d \nb=%d",a,b);
    return 0;
}
