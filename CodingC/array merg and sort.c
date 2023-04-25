#include<stdio.h>

int main()
{
 int i,j,n,m,k,temp;
 printf("enter size of  first array");
 scanf("%d",&n);
printf("enter size of second array");
scanf("%d",&m);
int a[n];
int b[m];
 int c[100];
printf("enter element in first array\n");
for(i=0;i<n;i++)
{
  printf("a[%d]=",i);
  scanf("%d",&a[i]);
}
printf("enter element in second array\n");
for(j=0;j<m;j++)
{
printf("b[%d]=",j);
 scanf("%d",&b[j]);
}
 i=0;
for(j=0;j<n;j++)
{
   c[i]=a[j];
  i++;
}
for(k=0;k<m;k++)
{
   c[i]=b[k];
i++;
}
for(i=0;i<n+m;i++)
{
for(j=0;j<m+n-1;j++)
{
if(c[j]>c[j+1])
{
  temp=c[j];
   c[j]=c[j+1];
   c[j+1]=temp;
}
}
}
printf(" after  merging and sorting \n");
for(i=0;i<m+n;i++)
{
  printf("c[%d]=",i);
printf("%d\n",c[i]);
}
return 0;
}
    