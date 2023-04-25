#include<iostream>
using namespace std;

int main()
{
 int i,j,n, count=0;
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
if(arr[i]==0)
{
 count++;
for(j=i;j<n-1;j++)
{
arr[j]=arr[j+1];
}
i--;
n--;
}
}

for(i=n;i<n+count;i++)
{
arr[i]=0;
}
for(i=0;i<n+count;i++)
{
cout<<arr[i]<<endl;
}
return 0;
}
    