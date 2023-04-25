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
 double i,n,j,sum=0,k=2;
cout<<"enter no :-";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=k;i<=n;j++)
{
if(isprime(j))
{
cout<<i<<"/"<<j;
if(i<n)
{
cout<<" + ";
}
sum=sum+i/j;
k=j+1;
break;
}
}
}
cout<<"sum of seriese="<<sum<<endl;
return 0;
}

