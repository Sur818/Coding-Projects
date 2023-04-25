#include<iostream>
using namespace std;

int fact(int n)
{
if(n==1||n==0)
return 1;
return n*fact(n-1);
}

int main()
{
int n,sum=0;
cout<<"enter range";
cin>>n;
for(int i=1;i<=n;i++)
{
sum=sum+fact(i);
cout<<i<<"!";
if(i<n)
{
cout<<"+";
}
}
cout<<"=sum of seriese="<<sum;
}