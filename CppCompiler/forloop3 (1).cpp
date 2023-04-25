#include<iostream>
using namespace std;

int main()
{
double i,sum=0,n;
    cout<<"enter range:-";
    cin>>n;
    for(i=1;i<=n;i+=2)
    {
    cout<<i<<"/"<<(i+1);
    if(i<n)
    {
    cout<<"+";
    }
    sum=sum+i/(i+1);
    }
    cout<<"="<<sum;
    return 0;
    }
    
   