// AREA AND CIRCUMFERENCE of Circle
#include<stdio.h>
#include<math.h>
int main(){
    float r,area,circumference;
    printf("Enter the radius of circle:");
    scanf("%f",&r);
    circumference=(2*3.14*r);
    area=(3.14*r*r);
    printf("The value of area is: %.2f",area);
    printf("\nThe Value of circumference is:%.2f",circumference);
    return 0;
}
