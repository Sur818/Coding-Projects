#include<stdio.h>
struct new
{
char name[100][100];
}*ptr,emp[10];

int main()
{
int i,n,r,j;
char temp[100];
ptr=&emp;
printf("how many name you want take");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter name:-");
scanf("%s",&(ptr)->name[i]);
}

for(i=0;i<n;i++)
{
for(j=0;j<n-1;j++)
{
r=strcmp((ptr)->name[j],(ptr)->name[j+1]);
if(r>0)
{
strcpy(temp,(ptr)->name[j]);
strcpy((ptr)->name[j],(ptr)->name[j+1]);
strcpy((ptr)->name[j+1],temp);
}
}
}
for(i=0;i<n;i++)
{
printf("%s\n",(ptr)->name[i]);
}
return 0;
}
    