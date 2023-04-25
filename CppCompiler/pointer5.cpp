#include<iostream>
using namespace std;

int main()
{
cout<<"this program print unique element in Array:-\n\n";
int i,n,flag=0,j;
cout<<"enter size of Array:-";
cin>>n;
int a[n];
int *p=a;
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
for(i=0;i<n;i++)
{
flag=0;
for(j=0;j<n;j++)
{
if(i!=j)
{
if(*(p+i)==*(p+j))
{
flag=1;
}
}
}
if(flag==0)
cout<<*(p+i);
}
return 0;
}
