#include<stdio.h>

int main()
{
int i,j,n,temp;
printf("enter size of array");
scanf("%d",&n);
int x[n];
for(i=0;i<n;i++)
{
  printf("x[%d]=",i);
   scanf("%d",&x[i]);
}
for(i=0;i<n;i++)
{
  for(j=0;j<n-1;j++)
{
if(x[j]>x[j+1])
{
   temp=x[j];
    x[j]=x[j+1];
    x[j+1]=temp;
    }
    }
    }
    
    for(i=0;i<n;i++)
    {
    printf("%d\n",x[i]);
    } 
    return 0;
    }
    