#include<iostream>
using namespace std;

int main()
{
 int i,j,n,m,sum=0;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int arr[n][m];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"arr["<<i<<"]["<<j<<"]=";
cin>>arr[i][j];
}
}

for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<arr[i][j]<<" ";
}
cout<<"\n";
}

cout<<"upper tranguler matrix:-\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(i<j)
{
cout<<arr[i][j]<<" ";
sum=sum+arr[i][j];
}
}
cout<<"\n";
}

cout<<"sum of upper="<<sum;
}
