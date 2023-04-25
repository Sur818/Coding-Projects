#include<iostream>
using namespace std;

int main()
{
int n,i,sum=0,max,min;
cout<<"enter size:-";
cin>>n;
 int arr[n];
for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
 max=arr[0];
 min=arr[0];
for(i=0;i<n;i++)
{
if(arr[i]>max)
{
max=arr[i];
}
if(arr[i]<min)
{
min=arr[i];
}
}
cout<<"max element in array="<<max<<endl;
cout<<"min element in Array="<<min<<endl;
return 0;
}
