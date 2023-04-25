#include<iostream>
using namespace std;

int main()
{
 int i,n,j,fact=1,sum=0;
cout<<"enter no of term:-";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<i<<"!";
if(i<n)
{
cout<<"+";
}
for(j=1;j<=i;j++)
{
fact=fact*j;
}
sum=sum+fact;
fact=1;
}
cout<<"="<<sum;
return 0;
}

