#include<iostream>
using namespace std;

int main()
{
int i,n,sum=0,j;
cout<<"enter range:-";
cin>>n;
cout<<"perfect no are:-\n";
for(j=1;j<=n;j++)
{
for(i=1;i<j;i++)
{
if(j%i==0)
{
sum=sum+i;
}
}
if(sum==i)
{
cout<<i<<endl;
}
sum=0;
}
return 0;
}
