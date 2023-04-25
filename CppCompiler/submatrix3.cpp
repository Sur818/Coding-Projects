#include<iostream>
using namespace std;
void submatrix(int arr[10][10],int n,int m,int p,int q)
{
int i,j,k1=0,k2=0,k;
for(k=0;k<p-n&&k<q-m;k++)
{
k1=0;
for(i=n;k1++<=k;i++)
{
cout<<"[";
k2=0;
for(j=m;k2++<=k;j++)
{
cout<<arr[i][j]<<" ";
}
cout<<"]";
cout<<"\n";
}
cout<<"\n\n";
}
}


void sub_matrix(int arr[10][10],int n,int m)
{
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
submatrix(arr,i,j,n,m);
}
}
}


int main()
{
cout<<"this program help you to find all possible subsqure matrix:-------\n\n";
int i,j,n,m;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int arr[10][10];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"arr["<<i<<"]["<<j<<"]=";
cin>>arr[i][j];
}
}
sub_matrix(arr,n,m);
}
