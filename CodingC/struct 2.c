#include<stdio.h>

struct stu
{
  int marks[10];
   char name[100];
   int total;
  int per;
};
  int main ()
{
  struct stu student[5];
 int i,j,sum=0,per=0;
  for(i=0;i<2;i++)
{
   per=0,sum=0;
  puts("enter name:=");
   scanf("%s",student[i].name);
printf("enter marks\n");
  for(j=0;j<5;j++)
 {
  scanf("%d=",&student[i].marks[j]);
   sum=sum+student[i].marks[j];
}
student[i].total=sum;
 student[i].per=sum/5;
}
for(i=0;i<2;i++)
{
printf("%s", student[i].name);
printf(" your perc is %d",student[i].per);
printf("\n");
}

return 0;
}

 