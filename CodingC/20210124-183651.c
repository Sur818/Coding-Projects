#include<stdio.h>

int main()
{
 int i,k=0,n,sum=2,f,j,m;
int arr[1000];
printf("enter no of term ");
scanf("%d",&n);
for(i=2;i<100;i++)
{
   f=0;
 for(j=2;j<i/2;j++)
{
if(i%j==0)
{
f=1;
break;
}
}
if(f==0)
{
//printf("%d\n",i);
arr[k++]=i;
}
}
printf("%d\n",2);
sum=sum+arr[0];
for(i=1;i<n;i++)
{
printf("%d\n",sum);
sum=sum+arr[i];

}
return 0;
}



 
    