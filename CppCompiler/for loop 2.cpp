#include<iostream>
using namespace std;
bool isprime(int n)
{
int i,flag=0;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag++;
return false;
break;
}
}
if(flag==0)
return true;
}


int main()
{
double i,n,j=2,sum=0,k=1;
cout<<"enter no of term:-";
cin>>n;
for(i=1;k<=n;i)
{
if(isprime(j))
{
cout<<i<<"/"<<j<<" + ";
sum=sum+(i/j);
i++;
k++;
}
j++;
}
cout<<"sum of series="<<sum;
return 0;
}