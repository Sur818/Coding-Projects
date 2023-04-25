#include<stdio.h>
struct new
{
char name[100];
}*ptr,emp[10];

int main()
{
int i,n,m,j;
char temp;
ptr=&emp;
printf("how many name you want take");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter name:-");
scanf("%s",&(ptr+i)->name);
 m=strlen((ptr+i)->name);

for(j=0;j<m/2;j++)
{
temp=(ptr+i)->name[j];
(ptr+i)->name[j]=(ptr+i)->name[m-1-j];
(ptr+i)->name[m-1-j]=temp;
}
printf("%s\n",(ptr+i)->name);
}
return 0;
}
