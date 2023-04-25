#include<iostream>
using namespace std;



int prime(int n)
{
int i,n1,f=0;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
f=1;
break;
}
}
if(f==0)
{
return 1;
}
else
{
return 0;
}
}

int palindrome(int n)
{
int z=n,rev=0,n1;
while(n!=0)
{
n1=n%10;
rev=rev*10+n1;
n=n/10;
}
if(z==rev)
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
int i,n;
double sum=0,k=1;
cout<<"enter no of term";
cin>>n;
cout<<"1/1"<<"+";
for(i=1;++k<=n;i++)
{
if(prime(i)==1&& palindrome(i)==1)
{
--k;
continue;
}
cout<<"1/"<<i;
if(k<n)
{
cout<<"+";
}
sum=sum+(double)1/i;
}
cout<<"="<<sum+1;
return 0;
}
  