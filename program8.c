#include<stdio.h>
int main(){
    int a,y;
printf("Enter a number \n");
scanf("%d",&a);
y=a%2;
if(y==0){
  printf("\nThe number is even.");  
}
else 
{
    printf("\nThe number is odd.");
}  return 0;
}