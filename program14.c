//SUM of Even Numbers And Odd Numbers
#include<stdio.h>
int main(){
     int N,i,evensum,oddsum;
     printf("Enter Value of Number:");
     scanf("%d",&N);
     evensum=0;
     oddsum=0;
     for(i=1;i<=N;i++){
        if(i%2==0){
            evensum=evensum+i;
        }
        if(i%2!=0){
            oddsum=oddsum+i;
        }
     }
     printf("\nsum of even numbers=%d",evensum);
     printf("\nsum of even numbers=%d",oddsum);
     return 0;
}