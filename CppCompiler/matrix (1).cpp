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


int main()
{
  int i,j,n,r,c,m,l=0,t=0;
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
cout<<"\n entered array are:-\n";
print((int *)a,n,m);
cout<<"enter resize row:-";
cin>>r;
cout<<"enter resize collom:-";
cin>>c;
int b[r][c];
cout<<"\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
b[l][t++]=a[i][j];
if(t==c)
{
t=0;
l++;
}
}
}
print((int *)b,r,c);
}















    