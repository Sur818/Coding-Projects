#include<iostream>
using namespace std;

int main()
{
 int i,n,sum=0,prod=1;
cout<<"enter no:-";
cin>>n;
while (n!=0)
{
sum=sum+(n%10);
prod=prod*(n%10);
n=n/10;
}
if(sum==prod)
{
cout<<"spy no:-";
}
else
{
cout<<"not spy no:-";
}
return 0;
}
