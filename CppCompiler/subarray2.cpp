#include<iostream>
using namespace std;
void subarray(int [] ,int );

int main()
{
   int arr[]={1,-1,-2,3,-6,5,+5,1,-5};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<"all possible subarray who's sum=0 are:-\n";
subarray(arr,n);
return 0;
}


void subarray(int arr[],int n)
{
int i,j,sum,k=0;
for(i=0;i<n;i++)
{
sum=0;
for(j=i;j<n;j++)
{
sum+=arr[j];
if(sum==0)
{
for(k=i;k<=j;k++)
{
cout<<arr[k]<<" ";
}
cout<<endl;
}
}
}
}

