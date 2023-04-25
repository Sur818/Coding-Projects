#include<stdio.h>
int main()
{
int i,j,n,m,count=0;
printf("enter size of array");
scanf("%d",&n);
int a[n];
int b[n];
for(i=0;i<n;i++)
{
 printf("a[%d]=",i);
scanf("%d",&a[i]);
}
printf("which element freq want to cheq");
scanf("%d",&m);
for(i=0;i<n;i++)
{
if(a[i]==m)
{
count++;
}
}
printf("Freq of %d Elem=%d",m,count);
return 0;
}


   