#include<stdio.h>
int main()
{
 int i,j,n,p;
printf("enter the no");
scanf("%d",&n);
  
for(i=1;i<=n;i++)
{
   printf("%d\n",i);
 }
  printf("which no want to delete=");
  scanf("%d",&p);
 for(j=1;j<=n;j++)
{
 if(j==p)
  {
    continue;
    }
    printf("%d\n",j);
    }
    
    return 0;
    }
    