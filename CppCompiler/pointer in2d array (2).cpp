#include<iostream>
using namespace std;

bool array_sparse(int *arr,int n,int m)
{
int i,j,count=0;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(*(arr+i*m+j)==0)
count++;
}
}
if(count>=(m*n)/2)
return true;
else
return false;
}


void print(int *arr,int n,int m)
{
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<*(arr+i*m+j)<<" ";
}
cout<<"\n";
}
}


int main()
{
int i,j,n,m;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int arr[n][m];
cout<<"enter elements in  matrix:-\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>arr[i][j];
}
}
cout<<"entered  array are:-\n";
print((int *)arr,n,m);
if(array_sparse((int *)arr,n,m))
{
cout<<"sparese matrix:-";
}
else
{
cout<<"not sparese matrix:-";
}
}

