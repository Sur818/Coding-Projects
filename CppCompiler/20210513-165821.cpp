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
int (*p)[m]=arr;
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
cout<<*(*(p+i)+j)<<" ";
}
cout<<"\n";
}
return 0;
}



    