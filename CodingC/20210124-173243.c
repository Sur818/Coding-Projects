#include<stdio.h>

int main()
{
int i,k=0,n,sum=1,m;
int arr[1000];
printf("enter range");
scanf("%d",&n);
printf("enter common diff of ap");
scanf("%d",&m);
int j=0;
for(i=0;i<n;i++)
{
 arr[k++]=j;
j=j+m;
}
sum=sum+arr[0];
for(i=1;sum<n;i++)
{
printf("%d\n",sum);
sum=sum+arr[i];
}
return 0;
}
