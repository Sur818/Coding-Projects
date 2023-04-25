#include<stdio.h>
int insTsort(int*ptr,int m,int n)
{
  int i,j,p,temp;
  for(i=n+1;i>m-1;i--)
{
  *(ptr+i)=*(ptr+i-1);
}
 printf("which no want insert");
scanf("%d",&p);
*(ptr+m-1)=p;
printf("\nafter inserting\n");
for(i=0;i<n+1;i++)
{
printf("a[%d]=%d\n",i,*(ptr+i));
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
printf("\nafter sorting\n");
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
    
  
  

