#include<iostream>
using namespace std;

int main()
{
 int i,j,n,m,sum=0,sum1=0;
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

for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(i==j)
{
sum=sum+arr[i][j];
}
if(i+j==n-1)
{
sum1=sum1+arr[i][j];
}
}
}
cout<<"sum of left digonal matrix=\n"<<sum;
cout<<"sum of right digonal matrix=\n"<<sum1;
}