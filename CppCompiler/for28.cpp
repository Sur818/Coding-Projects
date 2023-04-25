#include<iostream>
using namespace std;

int main()
{
int i,n,j,f;
cout<<"enter no";
cin>>n;
for(i=2;n!=0;i++)
{
f=0;
if(n%i==0)
{
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
f++;
}
}
if(f==0)
{
cout<<i<<endl;
n=n/i;
}
}
}
return 0;
}