#include<iostream>
using namespace std;

int main()
{
 int i,n,m,max=0,temp;
cout<<"enter two no";
cin>>n>>m;
i=1;
while(i<=n||i<=m)
{
if(n%i==0&&m%i==0)
{
if(i>max)
{
max=i;
temp=max;
}
}
i++;
}
cout<<temp;
return 0;
}