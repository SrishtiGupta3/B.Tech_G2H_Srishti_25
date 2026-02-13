#include <stdio.h>
int main ()
{
    int m1,m2,m3,m4,m5;
    int sum;
    float percentage;
    printf("Enter marks of 5 subject");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    sum = m1+m2+m3+m4+m5;
    percentage=(sum*100)/500;
    printf ("Sum is %d \n",sum);
    printf ("Percentage is %f",percentage);
    return 0;
    
}