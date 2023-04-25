#include<stdio.h>

int rev(int a[],int i,int n)
{
  int temp;
int b[100];
if(i<n)
{
if(i<n/2)
{
    temp=a[i];
    a[i]=a[n-i-1];
    a[n-1-i]=temp;
  }
  printf("%d\n",a[i]);
   rev(a,i+1,n);  

}
}
int main()
{
  int n,j,i=0;
printf("enter size of array");
scanf("%d",&n);
int a[n];
for(j=0;j<n;j++)
{
 printf("a[%d]=",j);
scanf("%d",&a[j]);
}
rev(a,i,n);
return 0;
}

