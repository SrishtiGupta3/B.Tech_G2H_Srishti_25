#include<stdio.h>
int pov(int a ,int b);
int main(){
    int x,y;
    printf("enter value of x:");
    scanf("%d",&x);
    printf("\nenter value of y:");
    scanf("%d",&y);
    pov(x,y);
    return 0;
}
  int  pov(int a,int b){
      int i,pow;  
      pow=1;
for(i=1;i<=b;i++){
    pow=a*pow;   
    }
    printf("\nValue of x^y is: %d",pow);
}