#include<stdio.h>
#include<string.h>
int main(){
    int N,N2,i;
    N2=0;
    printf("Enter the value of N:");
    scanf("%d",&N);
    getchar();
    char a[N];
    printf("Enter string :");
gets(a);
printf("The string is:%s \n",a);
for(i=0;a[i];i++){
if((a[i]=='a')||(a[i]=='e')||(a[i]=='o')||(a[i]=='u')||(a[i]=='i')){
    N2=N2+1;
}
}
printf("The vowels in a string are:%d",N2);
return 0;
}