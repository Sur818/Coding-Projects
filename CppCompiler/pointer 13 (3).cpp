#include<iostream>
using namespace std;
int longest_substr(int *a,int n)
{
int i,j,prod=1,index1,index2,ans=0;
for(i=0;i<n;i++)
{
prod=1;
for(j=i;j<n;j++)
{
prod=prod*a[j];
if(ans<prod)
{
index1=i;
index2=j;
}
ans=max(ans,prod);
}
}
cout<<"longest substring who's product are max:-";
for(i=index1;i<=index2;i++)
{
cout<<a[i];
}
}


int main()
{
 int i,n;
cout<<"enter size:-";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
longest_substr(a,n);
}


 