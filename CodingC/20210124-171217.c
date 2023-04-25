#include<stdio.h>

int main()
{
 int i,k=0,n,sum=1,m;
int arr[1000];
printf("enter no of term ");
scanf("%d",&n);
printf("enter common diff of ap");
scanf("%d",&m);
for(i=0;k<n;i=i+m)
{
 arr[k++]=i;
}
for(i=0;i<n;i++)
{
sum=sum+arr[i];
printf("%d\n",sum);
}
return 0;
}
