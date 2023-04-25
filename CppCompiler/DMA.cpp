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
int i,*a,temp=1,j;
a=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i!=j)
{
temp=temp*p[j];
}
}
a[i]=temp;
temp=1;
}
return a;
}



