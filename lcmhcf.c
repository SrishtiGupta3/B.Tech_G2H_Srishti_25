#include<stdio.h>
int main(){
    int a,b;
    int lcm,d,i,hcf;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("\nEnter the value of b:");
    scanf("%d",&b);
        for (i=1;i<=a&&i<=b;i++){
            if((a%i==0)&&(b%i==0)){
                d=i;
            }
        }
        lcm=a*b/d;
        hcf=d;
        printf("Lcm of the nembers is:%d",lcm);
        printf("\nHcf of the nembers is:%d",hcf);
        return 0;
    }

    






















