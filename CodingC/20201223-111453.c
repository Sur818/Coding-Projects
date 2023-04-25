#include<stdio.h>

int main()
{
  int i,j,n;
printf("enter no size");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nreverse of no\n");
for(i=n-1;i>=0;i--)
{
printf("%d",a[i]);
}
return 0;
}

