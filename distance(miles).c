#include<stdio.h>
int main(){
    float a ,b ;
    printf("Enter distance in Miles.");
    scanf("%f",&a);
    b=0.621*a;
    printf("The Value in Km is %f",b);
 printf("Enter the distance in km");
 scanf("%f",&b);
 a=1.609*b;
 printf(" the distance in miles is %f",a);
    return 0;
}
