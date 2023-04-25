#include<iostream>
using namespace std;

int main()
{

     int n,i,j,k;
    double sum=0,sum1=0,fact=1,fact1=1;
    cout <<"enter range:-";
    cin>>n;
    for(i=1;i<=n;i++)
    {
    fact1=fact1*i;
    for(j=1;j<=i;j++)
    {
    cout<<j<<"!";
    if(j<i)
    {
    cout<<"+";
    }
   for(k=1;k<=j;k++)
   {
    fact=fact*k;
    }
    sum1=sum1+fact;
    fact=1;
  }
cout<<"/"<<i<<"!";
if(i<n)
{
cout<<"  +  ";
}
sum=sum+(double)sum1/fact1;
sum1=0;
}
cout<<"="<<sum;
return 0;
}