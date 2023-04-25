#include<iostream>
using namespace std;

int main()
{
  int i,j,n,m;
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
arr[i][j]=i*10+j;
cout<<arr[i][j]<<endl;
}
}
cout<<"after storing index:-\n";
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
