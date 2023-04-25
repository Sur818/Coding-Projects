#include<iostream>
using namespace std;

int main()
{
  int i,j,n,k;
cout<<"enter size:-";
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]==arr[j])
{
for(k=j;k<n;k++)
{
arr[k]=arr[k+1];
}
i--;
n--;
}
}
}
for(i=0;i<n;i++)
{
cout<<arr[i]<<endl;
}
return 0;
}