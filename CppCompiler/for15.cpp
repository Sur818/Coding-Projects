#include<iostream>
using namespace std;

int main()
{
 int i,j,n,sum=0,f;
cout<<"enter range";
cin>>n;
for(i=1;i<=n;i++)
{
f=0;
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
f=1;
}
}
if(f==0&&i!=1)
{
cout<<i<<endl;
sum=sum+i;
}
}
cout<<"sum of prime no="<<sum;
return 0;
}