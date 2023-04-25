#include<iostream>
using namespace std;

int Armstrong (int n)
{
int i,j,z=n,n1,sum=0;
for(i=1;n!=0;i++)
{
n1=n%10;
sum=sum+n1*n1*n1;
n=n/10;
}
if(sum==z)
{
return 1;
}
else
{
return 0;
}
}


int main()
{
int a;
cout<<"enter any no";
cin>>a;
if(Armstrong(a)==1)
{
cout<<"Armstrong no";
}
else
{
cout<<"Armstrong no";
}
return 0;
}
