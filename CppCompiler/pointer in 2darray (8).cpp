#include<iostream>
using namespace std;
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

void array_point(int *arr,int n,int m)
{
int i,j,c,*b;
cout<<"entered array:-\n";
print(arr,n,m);
cout<<"which collom want to sort:-\n";
cin>>c;
for(j=0;j<m;j++)
{
for(i=0;i<n;i++)
{
b[i]=*(arr+i*m+j);
}
if(j==c-1)
{
sort(b,b+i);
for(i=0;i<n;i++)
{
*(arr+i*m+j)=b[i];
}
}
else
{
for(i=0;i<n;i++)
{
*(arr+i*m+j)=b[i];
}
}
}
print(arr,n,m);
}



int main()
{
int i,j,n,m;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int a[n][m];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>a[i][j];
}
}
array_point((int *)a,n,m);
}