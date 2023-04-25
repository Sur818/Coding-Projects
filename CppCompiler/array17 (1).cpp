#include<iostream>
using namespace std;

int main()
{
 int i,n,m,j;
cout<<"enter size:";
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
cout<<"which element want to delete:-";
cin>>m;
for(i=0;i<n;i++)
{
if(arr[i]==m)
{
for(j=i;j<n-1;j++)
{
arr[j]=arr[j+1];
}
i--;
n--;
}
}

for(i=0;i<n;i++)
{
cout<<arr[i]<<endl;
}
return 0;
}