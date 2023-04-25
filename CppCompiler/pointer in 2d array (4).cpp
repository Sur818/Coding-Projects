#include<iostream>
using namespace std;
void print(int *arr,int n,int m)
{
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<*(arr+i*m+j);
if(*(arr+i*m+j)<10)
{
cout<<"  ";
}
else
{
cout<<" ";
}
}
cout<<"\n";
}
}


void arry_delete(int *arr,int n,int m)
{
int i,j,r;
cout<<"\n entered element are:-\n";
print(arr,n,m);
cout<<"which row want to delete:-";
cin>>r;
for(i=r-1;i<n-1;i++)
{
for(j=0;j<m;j++)
{
*(arr+i*m+j)=*(arr+(i+1)*m+j);
}
}
print(arr,n-1,m);
}







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
cin>>arr[i][j];
}
}
arry_delete((int *)arr,n,m);
}