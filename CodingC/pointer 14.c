#include<stdio.h>

int main()
{
  int i,j,n,temp;
printf("enter size of array");
scanf("%d",&n);
 int a[n];
 int*ptr=&a;
printf("enter element in array\n");
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&*(ptr+i));
}
for(i=0;i<n;i++)
{
for(j=0;j<n-2;j++)
{
  if(j%2==0)
{
  if(*(ptr+j)>*(ptr+j+2))
  {
   temp=*(ptr+j);
   *(ptr+j)=*(ptr+j+2);
   *(ptr+j+2)=temp;
}
}
else if(j%2==1)
{
  if(*(ptr+j)>*(ptr+j+2))
{
 temp=*(ptr+j);
   *(ptr+j)=*(ptr+j+2);
   *(ptr+j+2)=temp;
}
}
}
}
for(i=0;i<n;i++)
{
printf("%d\n",*(ptr+i));
}
return 0;
}

