#include<stdio.h>
int main()
{
char string[100];
char*ptr=string;
 int n,i,j,k;
printf("enter string");
gets(string);
n=strlen(string);
for(i=0;i<n;i++)
{
 if(*(ptr+i)==*(ptr+i+1))
{
for(j=i;j<n;j++)
{
  *(ptr+j)=*(ptr+j+1);
}
n--;
i--;
}
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
 if(*(ptr+i)==*(ptr+j))
{
  for(k=i;k<n;k++)
{
 *(ptr+k)=*(ptr+k+1);
}
n--;
i--;
}
}
}
n=strlen(string);
printf("%d different type of elements are present\n",n);
puts(string);
}


 

    