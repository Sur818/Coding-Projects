#include<stdio.h>

int main()
{
 int i,j,n,m;
printf("enter the rows");
scanf("%d",&n);
printf("enter the collom");
scanf("%d",&m);
  for(i=1;i<=n;i++)
{
  for(j=1;j<=m;j++)
{
   if(i<=n/2)

   {
 if(j>=1&&j<=i)
{
  printf("*");
}
 else
{
printf(" ");
}
}
else if(i>n/2)
 {
  if(j>=1&&j<=(n+1)-i)
   {
    printf("*");
    }
     else
     {
     printf(" ");
    }
    }
    }
printf("\n");

}

return 0;
}
