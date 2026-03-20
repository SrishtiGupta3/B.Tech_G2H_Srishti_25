// Simple interest
#include<stdio.h>
int main(){ 
  float P,R,T,SI,CI;
  printf("The value of principal amount:");
  scanf("%f",&P);
  printf("The Value of rate of interest:");
  scanf("%f",&R);
  printf("The Value of time:");
  scanf("%f",&T);
SI=(P*R*T)/100;
CI=(P*pow((1+(R/100)),T))-P;
printf("The Value of simple interest:%.2f",SI);
printf("\nThe Value of compound interest:%.2f",CI);
return 0;
}