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
cout<<"arr["<<i<<"]["<<j<<"]=";
cin>>arr[i][j];
}
}
cout<<"before transposition:-\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<arr[i][j]<<" ";
}
cout<<"\n";
}
cout<<"after transportation:-\n";

for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<arr[j][i]<<" ";
}
cout<<"\n";
}
return 0;
}


