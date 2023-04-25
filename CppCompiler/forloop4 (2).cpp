#include<iostream>
using namespace std;

int main()
{

     int n,i,j, sum=0,fact=1;
    cout <<"enter range:-";
    cin>>n;
    for(i=1;i<=n;i++)
    {
    cout<<i<<"!";
    for(j=1;j<=i;j++)
    {
    fact=fact*j;
  }
if(i<n)
{
cout<<"+";
}
sum=sum+fact;
fact=1;
}
cout<<"="<<sum;
return 0;
}