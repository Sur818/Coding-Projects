#include<iostream>
using namespace std;
int missing_no(int [],int);
int main()
{
   int i,j,n;
cout<<"enter size:-";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
sort(a,a+n);
cout<<"smallest mssing no:-"<<missing_no(a,n);
return 0;
}



int missing_no(int a[],int n)
{
int i,temp,ans=a[n-1];
for(i=0;i<n-1;i++) 
{
if(a[i+1]!=a[i]+1)
{
temp=(a[i+1]-1);
ans=min(ans,temp);
}
}
return ans;
}
