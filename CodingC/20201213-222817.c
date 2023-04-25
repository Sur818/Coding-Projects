#include<stdio.h>
 int main()
{
int i,n,n1,m,count=0;
int a[100];
printf("enter the no");
scanf("%d",&n);
m=n;
for(i=1;n1!=0;i++)
{
 n1=m/10;
 m=n1;
 count++;
}
for(i=0;i<count;i++)
{
   a[i]=n%10;
    n=n/10;
     }
    printf("reverse of given no is\n");
    for (i=0;i<count;i++)
    {
    printf("%d",a[i]);
    }
    return 0;
    }
