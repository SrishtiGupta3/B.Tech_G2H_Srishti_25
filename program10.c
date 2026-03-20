// PERCENTAGE
#include<stdio.h>
int main(){
    float sub1,sub2,sub3,sub4,sub5;
    float sum,percentage;
    printf("Enter marks of 5 subjects .\n");
    scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
    sum=sub1+sub2+sub3+sub4+sub5;
    percentage=(sum/500)*100;
        printf("Percentage is :%.2f \n",percentage);
        if(percentage>=1&&percentage<=60){
            printf("Grade is 'D'.");
        }
else if(percentage>60&&percentage<=80){
    printf("Grade is 'C'.");
}
else if(percentage>80&&percentage<=90){
    printf("Grade is 'B'.");
}
else if(percentage>90&&percentage<=100  ){
    printf("Grade is 'A'.");
}
    return 0;
}
