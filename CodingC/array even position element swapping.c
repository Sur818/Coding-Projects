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
 printf("you entered array is\n");
 for(i=0;i<n;i++)
{
 printf("%d\n",x[i]);
}
 if(n%2==0)
{ 
 
for(i=0;i<=n;i++)
{
  if(i%2==0)
{
  temp=x[i];
   x[i]=x[i+1];
  x[i+1]=temp;
 }
}
printf("after swaping even position Element\n");
for(i=0;i<n;i++)
{
printf("%d\n",x[i]);
}

}
else 
{
 printf("n must be even no");
}

return 0;
}
