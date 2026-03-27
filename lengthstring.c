#include<stdio.h>
#include<string.h>
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
printf("\nThe length of string a is: %d",N2);
return 0;
}
