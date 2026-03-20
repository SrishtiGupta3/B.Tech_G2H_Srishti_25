// Temperature celsius to fahrenheit
#include<stdio.h>
#include<math.h>
int main(){
    float Tempc,Tempf;
    printf("Enter temperature in centigrade:");
    scanf("%f",&Tempc);
    Tempf=((Tempc/5)*9)+32;
    printf("The Value of temperature in fahrenheit is:%.2f",Tempf);
    return 0;
}