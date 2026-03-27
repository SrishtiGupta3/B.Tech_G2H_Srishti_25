#include<stdio.h>
int main(){
    int i,n,sum;
    float avg;
    printf("enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elemnts of array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
}
printf("\n");
for(i=0;i<n;i++){
        printf("arr[%d] : %d \n",i,arr[i]);
}
printf("\n");
sum=0;
for(i=0;i<n;i++){
    sum=sum+arr[i];
}
printf("The sum of elements are %d",sum);
avg=sum/n;
printf("\nAvg of elements of array is : %.2f",avg);
return 0;
}