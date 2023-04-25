#include<iostream>
using namespace std;

int main()
{
int i,n,j,k=1;
double sum=0,sum1=0,fact=1,fact1=1;
    cout<<"enter range:-";
    cin>>n;
    for(i=1;i<=n;i++)
    {
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
cout<<" + ";
}
fact1=fact1*i;
sum=sum+(double)sum1/fact1;
sum1=0;
fact=1;
}
cout<<"=\nsum of seriese="<<sum<<endl;
return 0;
}


