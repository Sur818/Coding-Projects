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
for(j=0;j<n-1;j++)
{
 if(*(ptr+j)>*(ptr+j+1))
 {
  temp=*(ptr+j);
   *(ptr+j)=*(ptr+j+1);
 *(ptr+j+1)=temp;
 }
 }
}
for(i=0;i<n;i++)
{
printf("%d\n",*(ptr+i));
}
return 0;
}

