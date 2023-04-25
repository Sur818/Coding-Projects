#include<iostream>
using namespace std;
int m1(int );
float m1(float);
int main()
{
float i,n,sum=0;
cout<<"enter no of term";
cin>>n;
for(i=1;i<=n;i=i+0.5)
{
cout<<"1/"<<m1(i);
sum=sum+1/m1(i);

if(i<n)
{
cout<<"+";
}
}
cout<<"sum of the series="<<sum;
}
int m1(int a)
{
return a;
}

float m1(float a)
{
return a;
}