#include<iostream>
using namespace std;

int main()
{
 int i,n,mm=1,j,ctr=0;
cout<<"enter size of Array:-";
cin>>n;
int arr[n];
int dup[n];
for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(arr[i]==arr[j])
{
dup[j]=mm;
mm++;
}
}
mm=1;
}
for(i=0;i<n;i++)
{
if(dup[i]==2)
{
ctr++;
}
}
cout<<"no of duplicate element are:-"<<ctr;
return 0;
}


