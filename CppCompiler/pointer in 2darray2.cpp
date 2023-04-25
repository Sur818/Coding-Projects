#include<iostream>
using namespace std;

int main()
{
 int i,j,n,m,r,k;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int b[m];
int a[n][m];
int *p=&a[0][0];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>*(p+i*m+j);
}
}
cout<<"which row want to sort:-";
cin>>r;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
b[j]=a[i][j];
}
if(i==r-1)
{
sort(b,b+j);
for(k=0;k<m;k++)
{
cout<<b[k]<<" ";
}
cout<<"\n";
}
else
{
for(k=0;k<m;k++)
{
cout<<b[k]<<" ";
}
}
cout<<"\n";
}

return 0;
}



    