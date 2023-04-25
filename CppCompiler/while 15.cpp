#include<iostream>
using namespace std;

int main()
{
cout<<"this program help to find  GCD of n numbers:-";
int i,n,j,ans;
cout<<"how many no want to hcf:-";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
int min=*min_element(a,a+n);
for(j=1;j<=min;j++)
{
for(i=0;i<n;i++)
{
if(a[i]%j!=0)
break;
}
if(i==n)
{
ans=j;
}
}
cout<<"Gcd="<<ans<<endl;
return 0;
}


