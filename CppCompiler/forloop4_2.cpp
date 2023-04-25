#include<iostream>
using namespace std;

int main()
{

     int n,i,j,k=1;
    double sum=0,sum1=0,fact=1,count=1;
    cout <<"enter range:-";
    cin>>n;
    for(i=1;i<=n;i++)
    {
    int odd=1;
    for(j=1;j<=i;j++)
    {
    cout<<odd<<"!";
    if(j<i)
    {
    cout<<"+";
    }
   for(k=1;k<=odd;k++)
   {
    fact=fact*k;
    }
    sum1=sum1+fact;
    fact=1;
    odd=odd+2;
  }
cout<<"/"<<i;
if(i<n)
{
cout<<"  +  ";
}
sum=sum+(double)sum1/i;
sum1=0;
}
cout<<"="<<sum;
return 0;
}