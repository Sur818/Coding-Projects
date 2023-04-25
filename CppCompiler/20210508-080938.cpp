#include<iostream>
using namespace std;

int main()
{
 int i,j,sum,n;
cout<<"enter no:-";
cin>>sum;
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
for(j=i;j<n;j++)
{
if(arr[i]+arr[j]==sum)
{
cout<<arr[i]<<" "<<arr[j]<<endl;
}
}
}
return 0;
}
