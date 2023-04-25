#include<iostream>
using namespace std;

int factorial(int n)
{
int i,fact=1;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
return fact;
}



int main ()
{
double i,j,n,sum1=0,sum=0;
cout<<"enter no";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
cout<<j;
if(j<i)
{
cout<<"+";
}
sum1=sum1+j;
}
cout<<"/"<<i<<"!";
if(i<n)
{
cout<< " + ";
}
sum=sum+(double)sum1/factorial(i);
sum1=0;
}
cout<<"sum of seriese="<<sum;
return 0;
}