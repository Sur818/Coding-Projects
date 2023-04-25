#include<iostream>
using namespace std;
void longestconsi(int [],int );
void show(int [],int,int );
void longestconsi(int arr[],int n )
{
int i,j,count,ans=0,index;
int arr1[10];
for(i=0;i<n;i++)
{
count=1;
for(j=i;j<n;j++)
{
if(arr[j+1]==arr[j]+1)
{
count++;
if(count>=ans)
{
index=i;
//cout<<index<<endl;
}
ans=max(ans,count);
}
else
{
break;
}
}
}
cout<<"longest consiqutive subsequence="<<ans<<endl;
show(arr,ans,index);
}


void show(int arr[],int n,int index )
{
int i,k=0;
for(i=index;k++<n;i++)
{
cout<<arr[i]<<" ";
}
}





int main()
{
   int i,n;
cout<<"enter size:-";
cin>>n;
int arr[n]; 
for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
longestconsi(arr,n);
}