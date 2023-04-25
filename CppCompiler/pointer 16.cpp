#include<iostream>
using namespace std;
int array_size(int *a,int n)
{
int i,j,ans2=0,sum=0,index1,index2;
int ans1=*max(a,a+n-1);
for(i=0;i<n;i++)
{
sum=0;
for(j=i;j<n;j++)
{
sum=sum+a[j];
if(ans1>=(abs(sum)-0))
{
if(ans2<j)
{
index1=i;
index2=j;
}
ans2=max(ans2,j);
ans1=min(ans1,(abs(sum)-0));
}
}
}
cout<<"longest subarray who's sum closest to zero or equal to zero:---\n\n";
cout<<"{";
for(i=index1;i<=index2;i++)
{
cout<<a[i]<<" ";
}
cout<<"}";
}



int main()
{
   int n,i;
cout<<"enter size:-";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
array_size(a,n);
}
    