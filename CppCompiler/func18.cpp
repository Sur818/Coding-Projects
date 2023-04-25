#include<iostream>
#include<cmath>
using namespace std;

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
if(f==0&&n!=1)
{
return 0;
}
else
{
return 1;
}
}


int factorial (int n)
{
int i,fact=1;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
return fact;
}



int main()
{
double n,k=0,i,sum=0,b=0;
cout<<"enter range:-";
cin>>n;
for(i=1;k<n;i++)
{
if(prime(i)==0)
{
k++;
cout<<++b<<"!/"<<i<<"^"<<b;
sum=sum+factorial(b)/pow(i,b);
if(k<=n)
{
cout<<" + ";
}
}
}
cout<<"sum of seriese="<<sum;
return 0;
}






