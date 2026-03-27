#include<stdio.h>
#include<string.h>
int main(){
    int N,N2;
    printf("Enter the value of N:");
    scanf("%d",&N);
    printf("Enter the value of N2:");
    scanf("%d",&N2);
    getchar();
    char a[N];
    char b[N2];
    printf("Enter string :");
gets(a);
printf("The 1st string is:%s \n",a);
strcpy(b,a);
printf("\nThe copied string(2nd) from 1st is: %s \n",b);
return 0;
}0;
}
