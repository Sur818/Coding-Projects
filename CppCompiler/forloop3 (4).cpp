#include<iostream>
using namespace std;

int main()
{
double sum=0,n,k1=1,k2=2;
int i;
    cout<<"enter no of term:-";
    cin>>n;
    for(i=1;i<=n;i++)
    {
    if(i%2!=0)
    {
    cout<<k1<<"/"<<(k1+2);
    if(i<n)
    {
    cout<<"+";
    }
    sum=sum+(double)k1/(k1+2);
    k1=k1+4;
    }
    else
{
cout<<k2<<"/"<<(k2+2);
if(i<n)
{
cout<<"+";
}
sum=sum+(double)k2/(k2+2);
k2=k2+4;
}
}

    cout<<"="<<sum;
    return 0;
    }
    
   