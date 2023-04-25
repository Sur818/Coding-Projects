#include<iostream>
using namespace std;

int main()
{
 int i,j,n,m,sum=0;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int a[n][m];
int b[m];
int c[n];
int *p=&a[0][0];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>*(p+i*n+j);
sum=sum+a[i][j];
}
b[i]=sum;
sum=0;
}

for(j=0;j<m;j++)
{
for(i=0;i<n;i++)
{
sum=sum+a[i][j];
}
c[j]=sum;
sum=0;
}

for(i=0;i<n;i++) 
{
cout<<"[";
for(j=0;j<m;j++)
{
cout<<a[i][j];
if(a[i][j]<10)
{
cout<<"  ";
}
else
{
cout<<" ";
}
}
cout<<b[i];
cout<<"]";
cout<<endl;
}
cout<<"[";
for(i=0;i<m;i++)
{
cout<<c[i]<<" ";
}
cout<<"]";
return 0;
}

