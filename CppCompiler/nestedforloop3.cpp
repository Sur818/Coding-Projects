#include<iostream>
using namespace std;

int main()
{
    int i,n,sum=0,fact=1,j,temp;
    cout<<"enter no";
    cin>>n;
    temp=n;
    for(i=0;n!=0;i++)
    {
    cout<<n%10<<"!";
   if(n/10!=0)
{
cout<<"+";
}
    for(j=1;j<=n%10;j++)
    {
    fact=fact*j;
    }
    sum=sum+fact;
    fact=1;
    n=n/10;
   }
cout<<"="<<sum<<endl;
if(sum==temp)
{
cout<<"strong no";
}
else
{
cout<<"not strong no";
}
return 0;
}

    