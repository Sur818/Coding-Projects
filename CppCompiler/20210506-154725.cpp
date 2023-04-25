#include<iostream>
using namespace std;

int main()
{
 int i,j,n,f=0;
cout<<"enter size ";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
for(i=0;i<n;i++)
{
f=0;
j=1;
while(j<n&&j!=i)
{
if(a[i]==a[j])
{
  ++f;
}
j++;
}
if(f==0)
{
cout<<a[i]<<endl;
}
}
return 0;
}
