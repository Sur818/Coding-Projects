#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int i,j,n;
double sum=0,sum1=0,k=1;
cout<<"enter no:-";
cin>>n;
for(i=1;i<=n;i+=2)
{
for(j=1;j<=i;j++)
{
if(j%2!=0)
{
cout<<j;
if(j<i)
{
cout<<"+";
}
sum=sum+j;
}
}
cout<<"/"<<k;
if(i<n)
{
cout<<" + ";
}
sum1=sum1+sum/k++;
sum=0;
}




cout<<"sum of seriese="<<sum1;
return 0;
}
