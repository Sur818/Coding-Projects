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


int main()
{
int i,n;
double sum=0,k=1;
cout<<"enter no of term";
cin>>n;
cout<<"1/1"<<"+";
for(i=1;++k<=n;i++)
{
if(prime(i)==1)
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
  