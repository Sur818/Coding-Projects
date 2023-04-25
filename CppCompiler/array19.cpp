#include<iostream>
using namespace std;


int main()
{
   int i,n,j,check=0;
cout<<"enter size:-";
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
cout<<"pairs are who's sum is equal to zero\n";
for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
{

if(i!=j)
{
if(arr[i]+arr[j]==0)
{
check++;
cout<<"["<<arr[i]<<","<<arr[j]<<"]";
cout<<endl;
}
}
}
}
if(check==0)
{
cout<<"no such pairs are exist:-\n";
}
return 0;
}