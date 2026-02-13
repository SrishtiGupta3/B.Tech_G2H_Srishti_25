#include<stdio.h>
int main(){
    int a,b,c;
printf("Enter three numbers \n");
scanf("%d %d %d",&a,&b,&c);
if(a>b){
    if(a>c){
  printf("\n a=%d is greatest",a); 
    } 
else{
printf("\n c=%d is greatest",c); 
}
}
else 
{
   if(b>c){
    printf("\n b=%d is greatest",b); 
   }
   else{
     printf("\n c=%d is greatest",c); 
   }
}  return 0;
}