#include<iostream>
using namespace std;

int main()
{
  int i,n,sum=0;
cout<<"enter range";
cin>>n;
for(i=1;i<=n;i++)
{
if(i%2==0)
{
continue;
}
sum=sum+i;
cout<<i<<endl;
}
cout<<"sun of odd natural no="<<sum;
return 0;
}
