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
 int i,n,j,sum=0,sum1=0;
cout<<"enter no :-";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<i<<"/";
for(j=2;j<=n;j++)
{
if(isprime(j))
{
cout<<j;
if(j<n)
cout<<"+";
sum1=sum1+j;
//k=j+1;
}
}
sum=sum+sum1;
sum1=0;
if(i<n)
{
cout<<" + ";
}
}
return 0;
}

