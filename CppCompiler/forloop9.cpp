#include<iostream>
using namespace std;

int main()
{
 int i,n,k=0;
double sum=0;
cout<<"enter no";
cin>>n;
for(i=1;++k<=n;i++)
{
if(i%2==0)
{
cout<<"1/"<<i;
sum=sum+(double)1/i;
}
else
{
cout<<"1/"<<i<<"*"<<i;
sum=sum+((double)1/(i*i));
}

if(k<n)
{ 
cout<<" + ";
}
}
cout<<"sum of series="<<sum;
return 0;
}


