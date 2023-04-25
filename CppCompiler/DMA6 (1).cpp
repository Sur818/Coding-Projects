#include<iostream>
using namespace std;
int *array_sprate(int*,int);
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
int *p1=array_sprate(p,n);
for(i=0;i<n;i++)
{
cout<<*(p1+i)<<" ";
}
}


int *array_sprate(int*p,int n)
{
int i=0,j=n-1,temp,k;
for(k=0;k<n;k++)
{
while (p[i]%2==0)
{
i++;
}
while (p[j]%2!=0)
{
j--;
}
if(i<j)
{
temp=p[i];
p[i]=p[j];
p[j]=temp;
}
}
return p;
}



