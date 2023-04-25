#include<iostream>
using namespace std;

int main()
{
  int i,j,n,m;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int a1[n][m];
int a2[n][m];
int *p1=&a1[0][0];
int *p2=&a2[0][0];
cout<<"enter element in first array:-\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>*(p1+i*m+j);
}
}
cout<<"enter element in second array:-\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>*(p2+i*m+j);
}
}

for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
a1[i][j]=a1[i][j]-a2[i][j];
}
}
cout<<"after subarraction of both matrix---------\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<a1[i][j];
if(a1[i][j]<10)
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
return 0;
}
    