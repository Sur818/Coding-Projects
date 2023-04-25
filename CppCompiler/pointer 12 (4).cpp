#include<iostream>
using namespace std;


int average(int *a,int n)
{
int i,j,sum=0,ans=0;
int index1,index2;
for(i=0;i<n;i++)
{
sum=sum+a[i];
for(j=i+1;j<n;j++)
{
sum=sum+a[j];
if(ans<sum)
{
index1=i;
index2=j;
}
ans=max(ans,sum);
}
sum=0;
}
cout<<"the longest subarray whoo's sum are max:--\n";
for(i=index1;i<=index2;i++)
{
cout<<a[i]<<" ";
}
cout<<"\n";
return ans;
}

int main()
{
   int i,n;
cout<<"enter size :-";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
cout<<average(a,n);
}
 