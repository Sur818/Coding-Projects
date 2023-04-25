#include<iostream>
using namespace std;

int rev(int n)
{
int i,n1,rev=0;
for(i=1;n!=0;i++)
{
n1=n%10;
rev=rev*10+n1;
n=n/10;
}


return rev;
}


int main()
{
int a,i,b,r;
double sum=0;
cout<<"enter starting point";
cin>>a;
cout<<"enter ending point";
cin>>b;
for(i=a;i<=b;i++)
{
r=rev(i);
cout<<i<<"/"<<r;
if(i<b)
{
cout<<" + ";
}
sum=sum+(double)i/r;
}
cout<<"sum of series="<<sum;
}


  