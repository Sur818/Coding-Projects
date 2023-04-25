#include<stdio.h>

int main()
{
char string[1000][1000];
int i,n;
char temp[100];
printf("how many string want to enter");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter string:=");
scanf("%s",&string[i]);
}
for(i=0;i<n/2;i++)
{
 strcpy(temp,string[i]);
strcpy(string[i],string[n-1-i]);
 strcpy(string[n-1-i],temp);
}
for(i=0;i<n;i++)
{
 printf("%s\n",string[i]);
}

return 0;
}