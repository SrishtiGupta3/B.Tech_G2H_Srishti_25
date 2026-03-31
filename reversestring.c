#include<stdio.h>
#include<string.h>
int main(){
    int i,n,length;
    char str[100];
    printf("Enter your string:");
//  gets(str);
 fgets(str,100,stdin);
 for(i=0;str[i];i++){
 n=n+1;
 }
length = n-1;
    for(i=length;i>=0;i--){
      printf("%c",str[i]);
    } 
  return 0;
   }
