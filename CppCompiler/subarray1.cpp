#include<iostream>
using namespace std;

int main()
{
  int i,sum=0,n;
int arr[]={1,2,-3,5,6,-1};
n=sizeof(arr)/sizeof(arr[0]);
bool flag=false;

for(i=0;i<n;i++)
{
sum=sum+arr[i];
if(sum==0)
{
flag=true;
break;
}
}
if(flag)
{
cout<<"found";
}

return 0;
}

