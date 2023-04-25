#include<stdio.h>
int insTsort(int*ptr,int m,int n)
{
  int i,j,p,temp;
  for(i=m-1;i<n-1;i++)
{
  *(ptr+i+1)=*(ptr+i);
}
 printf("which no want insert");
scanf("%d",&p);
*(ptr+m-1)=p;
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
for(i=0;i<n+1;i++)
{
printf("%d\n",*(ptr+i));
}
}
int main()
{
int i,j,n,m;
 printf("enter size of array");
  scanf("%d",&n);
  int a[n];
   printf("position where no want insert");
  scanf("%d",&m);
 for(i=0;i<n;i++)
{
 printf("a[%d]=",i);
scanf("%d",&a[i]);
 }
  insTsort(&a,m,n);
}
    
  
  

