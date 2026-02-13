#include <stdio.h>
int main ()
{
    int a,b;
    int sum,sub,product,division;
    printf("Enter two numbers.\n");
    scanf("%d%d ",&a,&b);
    sum=a+b;
    sub=a-b;
    product=a*b;
    division=a/b;
    printf("Sum of a and b is %d \n",sum);
    printf("Sub of a and b is %d \n",sub);
    printf("Product of a and b is %d \n",product);
    printf("Division of a and b is %d \n",division);
    return 0;
}
