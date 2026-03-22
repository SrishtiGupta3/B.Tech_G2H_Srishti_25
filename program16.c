// Prime NUMBER
#include<stdio.h>
int main(){
    int N,i,d;
    printf("Enter value of number:");
    scanf("%d",&N);
    d=1;
    for(i=2;i<N;i++){
        d=N%i;
        if(d==0){
            printf("Not a prime number.");
            break;
        }
    }
    if(d!=0){
        printf("Prime Number.");
    }
    return 0;
}