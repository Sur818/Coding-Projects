#include<iostream>
using namespace std;

int main()
{
double sum=0,n;
int i;
    cout<<"enter range:-";
    cin>>n;
    for(i=1;i<=n;i++)
    {
    if(i%2!=0)
    {
    cout<<i<<"/"<<(i+2);
    if(i<n)
    {
    cout<<"+";
    }
    sum=sum+(double)i/(i+2);
    }
    else
{
cout<<i<<"/"<<(i+2);
if(i<n)
{
cout<<"+";
}
sum=sum+(double)i/(i+2);
}
}

    cout<<"="<<sum;
    return 0;
    }
    
   