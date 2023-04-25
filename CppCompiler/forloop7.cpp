#include<iostream>
using namespace std;

int main()
{
 double n,k=0,sum=0,f=0;
int i,j;
cout<<"enter no of term";
cin>>n;
for(i=2;++k<=n;i++)
{
f=0;
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
f++;
}
}
if(f==0)
{
cout<<"1/"<<(i);
if(k<n)
{
cout<<" + ";
}
sum=sum+(double)1/i;
}
}
cout<<"sum of series="<<sum;
return 0;
}