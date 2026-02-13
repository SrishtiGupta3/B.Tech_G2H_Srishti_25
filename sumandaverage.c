#include <stdio.h>
int main ()
{
 
    int m1,m2,m3,m4,m5;
    int sum;
    float avg;
    printf("enter marks of 5 subject");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    sum = m1+m2+m3+m4+m5;
    avg = sum/5;
    printf ("sum is %d",sum);
    printf ("average is %f",avg);
    
    return 0;
    
}