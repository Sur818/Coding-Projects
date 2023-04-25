#include<iostream>
using namespace std;

bool array_skewsym(int *arr,int *t,int n,int m)
{
int flag=0,i,j;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(*(arr+i*m+j)!=*(t+i*m+j))
{
flag++;
return false;
}
}
}
if(flag==0)
return true;
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
int t[n][m];
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
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
t[i][j]=-arr[j][i];
}
}
cout<<"-ve transpose of matrix:-\n";
print((int*)t,n,m);
if(array_skewsym((int *)arr,(int *)t,n,m))
{
cout<<"skew symmetry matrix:-";
}
else
{
cout<<"not skew symmetric matrix:-";
}
}