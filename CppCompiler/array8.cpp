#include<iostream>
using namespace std;

int main()
{
 int i,j,n,f=0;
cout<<"enter size ";
cin>>n;
int a[n];
cout<<"unique element in Array:-\n";
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
for(i=0;i<n;i++)
{
f=0;
for(j=0;j<n;j++)
{
if(i!=j)
{
if(a[i]==a[j])
{
  ++f;
}
}
}
if(f==0)
{
cout<<a[i]<<endl;
}
}
return 0;
}
    