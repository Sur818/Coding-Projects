#include<stdio.h>

int freq(char*ptr,int n,char*ptr1)
{
  int i,count=0;
 for(i=0;i<n;i++)
{
 if(*(ptr+i)==*ptr)
{
  count++;
}
}
printf("fre of %c=%d",*ptr,count);
}
int main()
{
 char str[100];
char*ptr1=&str;
 char m;
 char*ptr=&m;
int n;
  printf("enter string:=");
  gets(str);
n=strlen(str);
printf("which char check fre:=");
scanf("%c",&m);
freq(&m,n,&str);
}