#include<iostream>
using namespace std;

int Armstrong (int n)
{
int i,j,n1,sum=0,z;
for(j=1;j<=n;j++)
{
z=j;
sum=0;
for(i=1;z!=0;i++)
{
n1=z%10;
sum=sum+n1*n1*n1;
z=z/10;
}
if(sum==j)
{
cout<<sum<<endl;
}
}
}





int main()
{
int a;
cout<<"enter  range";
cin>>a;
Armstrong(a);
return 0;
}
