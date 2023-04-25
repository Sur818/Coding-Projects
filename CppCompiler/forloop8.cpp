#include<iostream>
using namespace std;

int main()
{
 int i,n,k=0;
double sum=0;
cout<<"enter no";
cin>>n;
for(i=1;++k<=n;i+=2)
{
cout<<"1/"<<i;
if(k<n)
{ 
cout<<" + ";
}
sum=sum+(double)1/i;
}
cout<<"sum of series="<<sum;
return 0;
}


