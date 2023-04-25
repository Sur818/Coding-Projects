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
int n,i,sum=0;
cout<<"enter range:-";
cin>>n;
for(i=2;i<=n;i++)
{
if(isprime(i))
{
sum=sum+i;
cout<<i<<"+";
}
}
cout<<"\b ";
cout<<"\nsum of prime series="<<sum;
return 0;
}