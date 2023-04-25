#include<stdio.h>

int main()
{
 int i,j,temp,m,n,k;
printf("enter size of array");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&arr[i]);
}
for(i=0;i<n;++i)
{
for(j=i+1;j<n;++j)
{
if(arr[j]<arr[i])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]==arr[j])
{
for(k=j;k<n;k++)
{
arr[k]=arr[k+1];
}
i--;
n--;
}
}
}
printf("sorted /removal of dup.array:\n");
for(i=0;i<n;i++)
{
printf("%d\n",arr[i]);
}
printf("find nth max nth min elemmso enter npos");
scanf("%d",&m);
if(m>=n)
{
printf("this position not valid");
}
else
{
printf("%d=%dthmax element\n",arr[n-m],m);
printf("%d=%dthmin element",arr[m-1],m);
}
return 0;
}



