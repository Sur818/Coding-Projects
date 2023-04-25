#include<iostream>
using namespace std;

int main()
{
   int i,n,k=1,f=0,j;
double sum=0;
cout<<"enter no:-";
cin>>n;
for(i=2;k<=n;i++)
{
 f=0;
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
f=1;
break;
}
}
if(f==0)
{
sum=sum+(double)k/i;
cout<<k++<<"/"<<i;
if(k<=n)
{
cout<<" + ";
}
}
}
cout<<"sum of series="<<sum;
return 0;
}

