#include<stdio.h>

int main()
{
int n,*p,i;
printf("enter size of array:-");
scanf("%d",&n);
p=(int *)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
scanf("%d",&p[i]);
}
for(i=0;i<n;i++)
{
printf("%d\n",p[i]);
}
return 0;
}