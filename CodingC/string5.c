#include<stdio.h>

int main()
{
  char a[100]={'a','c','d','b','e','\0'};
int i,j,temp,m;
m=strlen(a);
for(i=0;a[i]!='\0';i++)
{
for(j=0;j<m-1;j++)
{
if(a[j]>a[j+1])
{
 temp=a[j];
 a[j]=a[j+1];
a[j+1]=temp;
}
}
}
for(i=0;a[i]!=0;i++)
{
printf("%c",a[i]);
}
return 0;
}
