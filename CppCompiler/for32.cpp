#include<iostream>
using namespace std;

int main()
{
 int i,n,r,k=0,a,sum=0;
cout<<"enter no of term;-";
cin>>n;
cout<<"first term=";
cin>>a;
cout<<"enter common ratio=";
cin>>r;
for(i=a;++k<=n;i*=r)
{
sum=sum+i;
cout<<i<<" ";
if(k==n)
{
cout<<n<<"\nth term if series="<<i;
}
}
cout<<"\nsum of gp series="<<sum;
return 0;
}