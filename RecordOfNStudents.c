#include<stdio.h>
#include<string.h>
struct DOB 
{
   int day;
   int month;
   int year;
};
struct Student
{
   int rollno;
   char name[25];
   float marks;
   struct DOB V1;
};
int main()
{ 
int i,n;
struct Student S[100];
printf("Enter number of students:");
scanf("%d",&n);
for(i=0;i<n;i++)
  {
    printf("Enter student%d details :\n",i+1);
    printf("Roll no : ");
    scanf("%d",&S[i].rollno);
    getchar();
    printf("name : ");
    gets(S[i].name);
    printf("marks : ");
    scanf("%f",&S[i].marks);
    printf("dob : ");
    scanf("%d%d%d",&S[i].V1.day,&S[i].V1.month,&S[i].V1.year);
  }
   printf("\n");
   printf("Record of the student are :\n");
for(i=0;i<n;i++)
  {
    printf("Student%d details are :\n",i+1);
    printf("Roll no= %d",S[i].rollno);
    printf("\nname = %s",S[i].name);
    printf("\nmarks=%.2f",S[i].marks);
    printf("\nDOB=%d/%d/%d",S[i].V1.day,S[i].V1.month,S[i].V1.year);
    printf("\n\n");
  }
return 0;
}