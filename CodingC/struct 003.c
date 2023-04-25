#include<stdio.h>

struct stu
{
int rollno;
char name[100];
int marks[100];
int per;
} student[10];
 int main()
{
int i,j,sum=0,n,m;
printf("enter row");
scanf("%d",&n);
printf("enter no of subject");
scanf("%d",&m); 
for(i=1;i<=n;i++)
{
puts("enter name=");
scanf("%s",student[i].name);
puts("enter roll no");
scanf("%d",&student[i].rollno);
puts("enter marks");
for(j=1;j<=m;j++)
{
printf("subject[%d]=",j);
scanf("%d",&student[i].marks[j]);
sum=sum+student[i].marks[j];
}
student[i].per=sum/m;
sum=0;
printf("\n");
}
for(i=1;i<=n;i++)
{
puts(student[i].name);
printf("per=%d\n",student[i].per);
}
}








    