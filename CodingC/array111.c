#include<stdio.h>

int main()
{
 int i,j=0,k=0,n;
printf("enter size of array");
scanf("%d",&n);
int a[n];
int b[n];
int c[n];
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
 b[j]=a[i];
j++;
}
else
{
c[k]=a[i];
 k++;
}
}
printf("even elements are\n");
for(i=0;i<j;i++)
{
printf("%d\t",b[i]);
}
printf("\nodd elements are\n");
for(i=0;i<k;i++)
{
printf("%d\t",c[i]);
}
return 0;
}




