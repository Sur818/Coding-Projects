#include<iostream>
using namespace std;

int main()
{
  int n,i,k,m;
cout<<"enter size of Array:-";
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
cout<<"which  element want to insert:-";
cin>>m;
cout<<"which posn:-";
cin>>k;

for(i=n-1;i>=k-1;i--)
{
arr[i+1]=arr[i];
}
arr[k-1]=m;
for(i=0;i<n+1;i++)
{
cout<<arr[i]<<endl;
}


return 0;
}

