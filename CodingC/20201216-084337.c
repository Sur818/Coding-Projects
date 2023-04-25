#include<stdio.h>
int main()
{
char string[100];
 int n,i,j;
printf("enter string");
gets(string);
n=strlen(string);
for(i=0;i<n;i++)
{
 if(string[i]==string[i+1])
{
for(j=i;j<n;j++)
{
  string[j]=string[j+1];
}
n--;
i--;
}
}
puts(string);
}


 

    