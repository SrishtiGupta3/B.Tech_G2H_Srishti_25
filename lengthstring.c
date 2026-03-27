#include<stdio.h>
int main(){
    int N,N2;
    printf("Enter the value of N:");
    scanf("%d",&N);
    getchar();
    char a[N];
    printf("Enter string :");
gets(a);
printf("The 1st string is:%s",a);
N2=strlen(a);
printf("The length of string a is: %d",N2);
return 0;
}