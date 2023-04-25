#include<iostream>
using namespace std;

int main()
{
int n1,n2,i=1,ans;
cout<<"enter two no:-";
cin>>n1>>n2;
  while(i<=n1)
{
if(n1%i==0&&n2%i==0)
{
ans=i;
}
i++;
}
cout<<"Gcd="<<ans;
return 0;
}
