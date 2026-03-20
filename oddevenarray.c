#include<stdio.h>
int main(){
    int i,n,n2;
    printf("enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array.\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
}
printf("\n");
for(i=0;i<n;i++){
        printf("%d",arr[i]);
}
printf("\n");
n2=0;
for(i=0;i<n;i++){
    if(arr[i]%2==0){
        n2=n2+1;
    }
}
printf("Total even numbers are %d and odd numbers are %d",n2,(n-n2));
return 0;
}