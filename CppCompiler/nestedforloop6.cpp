#include<iostream>
using namespace std;

int main()
{
  int n,i,sum=0,prod=1,j;
cout<<"enter range";
cin>>n;
for(i=1;i<=n;i++)
{
int z=i;
for(j=1;z!=0;j++)
{
sum=sum+(z%10);
prod=prod*(z%10);
z=z/10;
}
if(sum==prod)
{
cout<<i<<endl; 
}
sum=0;
prod=1;
}
return 0;
}
    