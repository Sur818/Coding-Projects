#include<iostream>
using namespace std;

int main()
{
int i,n,sum=0;
cout<<"enter no";
cin>>n;
for(i=1;i<n;i++)
{
if(n%i==0)
{
sum=sum+i;
}
}
if(sum==i)
{
cout<<"perfect no";
}
return 0;
}
