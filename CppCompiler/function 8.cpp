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

int main()
{
double n,sum=0,i;
cout<<"enter no of term";
cin>>n;
for(i=1;i<=n;i++)
{
int p=factorial(i);
int q=factorial(i+1);
sum=sum+(i/(p+q));
cout<<i<<"/"<<i<<"!"<<"+"<<(i+1)<<"!";
if(i<n)
{
cout<<" + ";
}
}
cout<<"="<<sum;
return 0;
}
