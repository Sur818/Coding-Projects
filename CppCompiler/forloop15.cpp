#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   double i,n,k=0;
double sum=0;
cout<<"enter no of term-";
cin>>n;
for(i=1;++k<=n;i++)
{
cout<<i<<"/"<<i<<"+"<<(i+(k+1))<<"^"<<2;
sum=sum+(double)(i/(i+(i+(k+1))*(i+(k+1))));
if(k<n)
{
cout<<" + ";
}
}
cout<<"sum of seriese="<<sum;
return 0;
}

