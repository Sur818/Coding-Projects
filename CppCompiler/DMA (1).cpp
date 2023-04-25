#include<iostream>
using namespace std;
int *array_multiple(int*,int);
int main()
{
  int *p,n,i;
cout<<"enter size of array:-";
cin>>n;
p=new int[n];
for(i=0;i<n;i++)
{
cout<<"*(p+"<<i<<")=";
cin>>*(p+i);
}
int *p1=array_multiple(p,n);
for(i=0;i<n;i++)
{
cout<<*(p1+i)<<" ";
}
}


int *array_multiple(int*p,int n)
{
int i,*a,j;
a=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
a[i]=1;
for(j=0;j<n;j++)
{
if(i!=j)
{
a[i]=a[i]*p[j];
}
}
}
return a;
}



