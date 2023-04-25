#include<iostream>
using namespace std;

int factorial (int n)
{
int fact=1,i;
for (i=1;i<=n;i++)
{
fact=fact*i;
}
return fact;
}

int main()
{
int i,n,sum=0;
cout<<"enter range=";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<i<<"!";
if(i<n)
{
cout<<"+";
}
sum=sum+factorial(i);
}
cout<<"sum of seriese="<<sum;
return 0;
}

  