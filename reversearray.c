#include<stdio.h>
int main(){
    int i,n;
    printf("enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elemnts of array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
}
printf("\n");
for(i=0;i<n;i++){
        printf("%d",arr[i]);
}
printf("\n");
printf("reverse array is :\n");
for(i=(n-1);i>=0;i--){
     printf("%d",arr[i]);
}
return 0;
}