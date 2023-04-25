#include<stdio.h>

int delete(int*ptr,int n,int*m)
{
    
     int i,j;
  for(i=0;i<n;i++)
{
for(j=*(m-1);j<n;j++)
{ 
  *(ptr+i+1)=*(ptr+i);
}
}
for(i=0;i<n-1;i++)
{
printf("a[%d]=%d\n",i,*(ptr+i));
}
}
int main()
{
 int i,n,m;
printf("enter size of array");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
  printf("a[%d]=",i);
  scanf("%d",&a[i]);
}
printf("which position no want to delete");
scanf("%d",&m);
delete(&a,n,&m);
return 0;
}







  

