#include<stdio.h>

int main()
{
int i,n,m;
printf("enter size");
scanf("%d",&n);
int a[n];
int*ptr=&a;
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&*(ptr+i));
}
printf("which posn no want to delete");
scanf("%d",&m);
for(i=m-1;i<n-1;i++)
{
 *(ptr+i)=*(ptr+i+1);
}
for(i=0;i<n-1;i++)
{
printf("%d\n",*(ptr+i));
}
return 0;
}
 
 