#include<stdio.h>
int main(){
    int N,i,d,pos=-1;
    printf("Enter the size of array:");
    scanf("%d",&N);
    int arr[N];
 printf("First array:\n");
 for(i=0;i<N;i++){
    printf("arr[%d]:",i);
    scanf("%d",&arr[i]);
 }
 printf("Enter your desired number:");
    scanf("%d",&d);
 for(i=0;i<N;i++){
    if(d==arr[i]){
        pos=i;
        break;
    }
}
    if(pos==-1){
        printf("Number not found");
    }
    else {
        printf("Desired element is obtained in :arr[%d]",pos);
    }
  return 0;
}