// #include<stdio.h>
// #include<string.h>
// int main(){
//      int i,l;
//      char str[100];
//      printf("enter string:\n");
//      gets(str);
//      l=strlen(str);
//      for(i=0;i<l/2;i++){
//         if(str[i]!=str[l-1-i]){
//         printf("Not a palindrome number.");
//         break;
//         }
//      }
//      if(i==l/2)
//      {
//         printf("palindrome number");
//             }
// }
// or
#include<stdio.h>
#include<string.h>
void f1(char s[]);
int main(){
     int i,l;
     char str[100];
     printf("enter string:\n");
     gets(str);
     f1(str);
     return 0;
}
void f1(char s[]){
    int i,l;
    l=strlen(s);
     for(i=0;i<l/2;i++){
        if(s[i]!=s[l-1-i]){
        printf("Not a palindrome number.");
        break;
        }
     }
     if(i==l/2)
     {
        printf("palindrome number");
            }
}