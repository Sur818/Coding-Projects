#include<iostream>
using namespace std;

int main()
{
int i,j,n;
double k=1,h=1,sum=0,sum1=0;
cout<<"enter no of term";
cin>>n;
for(i=1;i<=n;i++)
{
if(i%2==0)
{
cout<<"1/";
k++;
for(j=1;j<=k;j++)
{
cout<<j;
if(j<k)
{
cout<<"+";
}
sum1=sum1+j;
}
sum=sum+1/sum1;
sum1=0;
}
else
{
cout<<"1/"<<++h;
sum=sum+1/h;
}
if(i<n)
{
cout<<" + ";
}
}
cout<<"sum of seriese="<<sum;
}

