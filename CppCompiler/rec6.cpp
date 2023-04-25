#include<iostream>
using namespace std;

int no(int n)
{
static int sum=0,n1;
if(n==0)
return sum;
n1=n%10;
sum=sum+n1*n1*n1;
return no(n/10);
}
int main ()
{
int n,arms;
cout<<"enter no";
cin>>n;
arms=no(n);
cout<<arms;
if(arms==n)
{
cout<<"\nArmstrong no";
}
else
{
cout<<"not Armstrong no";
}
}
