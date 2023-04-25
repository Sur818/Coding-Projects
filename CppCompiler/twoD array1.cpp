#include<iostream>
using namespace std;

int main()
{
 int i,n,m,j;
cout<<"enter no of row:-";
cin>>n;
cout<<"enter no of collom:-";
cin>>m;
int arr[n][m];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"arr["<<i<<"]=";
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
return 0;
}