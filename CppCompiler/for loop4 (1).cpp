#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int i,j,n;
double sum=0,sum1=0;
cout<<"enter age:-";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
cout<<j;
if(j<i)
{
cout<<"+";
}
sum=sum+j;
}
cout<<"/"<<i<<"^"<<i;
if(i<n)
{
cout<<" + ";
}
sum1=sum1+sum/pow(i,i);
sum=0;
}
cout<<"sum of seriese="<<sum1;
return 0;
}
