#include<stdio.h>
int rev(int n)
   {
int i,sum=0,n1;
     for(i=1;n!=0;i++)
     {
       n1=n%10;
      sum=sum*10+n1;
      n=n/10;
     }
     return sum;
   }

  int disarium(int n)
  {
int i,j,sum=0,z,n1;
    for(i=1;i<=n;i++)
   { 
     z=i;
     i=rev(i);
     sum=0;
    for(j=1;i!=0;j++)
    {
     n1=i%10;
    sum=sum+(int)pow(n1,j);
    i=i/10;
    }
    i=z;
    if(sum==z)
    {
     printf("%d\n",z);
   }
}
}
int main()
{
int n;
printf("enter the no");
scanf("%d",&n);
disarium(n);
}


   