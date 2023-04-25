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


int prime(int n)
{
int i,f=0;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
f=1;
break;
}
}
if(f==0)
{
return 1;
}
else
{
return 0;
}
}






int main()
{
  double i,j,n,sum=0,sum1=0,k;
cout<<"enter range";
cin>>n;
for(i=1;i<=n;i++)
{
j=1;
k=1;
while (k<=i)
{
if(prime(j)==1)
{
k++;
cout<<j<<"!";
sum1=sum1+factorial(j);
if(k<=i)
{
cout<<"+";
}
}
j++;
}
cout<<"/"<<i;
if(i<n)
{
cout<< " + ";
}
sum=sum+(double)sum1/i;
sum1=0;
}

cout<<"sum of seriese="<<sum;
}