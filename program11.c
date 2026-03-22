// OPERANDS AND OPERATOR
#include<stdio.h>
int main(){
    int a,b;
    char ch;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    printf("Enter operator(+,-,*,/).");
    scanf(" %c",&ch);
  switch(ch){
    case'+':
          printf("Sum of a and b is: %d",(a+b));
          break;
    case'-':
          printf("Subtraction of a and b is: %d",(a-b));
          break;
     case'*':
          printf("Product of a and b is: %d",(a*b));
          break;
     case'/':
          printf("Division of a and b is: %d",(a/b));
          break;
    default:
         printf("Invalid operator");
  }
    return 0;
}