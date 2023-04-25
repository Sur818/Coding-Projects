#include<iostream>
using namespace std;

int main()
{
  int i,j,n,m,temp,p,q;
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
cout<<"which  collom are interchange:";
cin>>p>>q;
if(p>n-1||q>m-1)
{
goto jump;
}
 for(i=0;i<n;i++)
{
 temp=arr[i][p-1];
arr[i][p-1]=arr[i][q-1];
arr[i][q-1]=temp;
}

for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<arr[i][j]<<" ";
}
cout<<endl;
}

jump:
cout<<"limit exceeded:-";
return 0;
}
