#include<stdio.h>
int main(){
    int i,n,largest;
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
largest=arr[0];
for(i=1;i<n;i++){
    if(arr[i]>largest){
        largest =arr[i];
    }   
}
printf("The largest element is %d",largest);
return 0;
}