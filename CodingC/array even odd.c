#include<stdio.h>

int main()
{
 int i,j,n,sum1=0,sum2=0;
  printf("enter size of array");
   scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
   printf("a[%d]=",i);
   scanf("%d",&a[i]); 
}
 for(i=0;i<n;i++)
{
  if(a[i]%2==0)
{
    printf("%d is even\n",a[i]);
  sum1=sum1+a[i];
    }
   else
{
printf("%d is odd\n",a[i]);
   sum2=sum2+a[i];
}
}
printf("even no sum is %d\n",sum1);
 printf("odd no sum  is %d",sum2);
return 0;
}

