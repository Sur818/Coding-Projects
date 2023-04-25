#include<iostream>
using namespace std;

int main()
{
 int i,n, count=0;
cout<<"enter size:-";
cin>>n;
int arr[100];
for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
for(i=0;i<n;i++)
{
if(arr[i]!=0)
{
arr[count++]=arr[i];
}
}
while (count<n)
{
arr[count++]=0;
}
for(i=0;i<n;i++)
{
cout<<arr[i]<<endl;
}
return 0;
}
    