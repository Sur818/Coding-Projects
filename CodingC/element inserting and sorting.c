#include<stdio.h>

int main()
{
 int i,j,b,n,m,temp;
printf("enter size");
scanf("%d",&n);
int x[100];
int*ptr=&x;
for(i=0;i<n;i++)
{
 printf("x[%d]=",i);
scanf("%d",&*(ptr+i));
}
printf("which no want to insert:=");
scanf("%d",&m);
printf("which position:=");
scanf("%d",&b);
for(i=n;i>b-1;i--)
{
*(ptr+i)=*(ptr+i-1);
}
*(ptr+b-1)=m;
for(i=0;i<n+1;i++)
{
printf("%d\n",*(ptr+i));
}
for(i=0;i<n+1;i++)
{
for(j=0;j<n;j++)
{
if(*(ptr+j)>*(ptr+j+1))
{
temp=*(ptr+j);
*(ptr+j)=*(ptr+j+1);
*(ptr+j+1)=temp;
}
}
}
printf("\nafter inserting and sorting\n");
for(i=0;i<n+1;i++)
{
printf("%d\n",*(ptr+i));
}
return 0;
}


