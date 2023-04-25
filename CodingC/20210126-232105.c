#include<stdio.h>
#include<stdlib.h>
struct emp
{
int no;
char name[100];
float salery;
}*ptr,emp1[10];
int main()
{
ptr=&emp1;
int i,n;
printf("how many emp");
scanf("%d",&n);
ptr=(struct emp*)malloc(sizeof(struct emp));
if(ptr=='NULL')
{
printf("no memory allocated");
}
else
{
for(i=0;i<n;i++)
{
printf("enter emp%d no name  salery",i+1);
scanf("%d %s %f",&(ptr+i)->no,&(ptr+i)->name,&(ptr+i)->salery);
}
}
for(i=0;i<n;i++)
{
printf("Emp%dno=%d\tEmp%dname=%s\n",i+1,(ptr+i)->no,i+1,(ptr+i)->name);
}
return 0;
}

