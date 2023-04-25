#include<iostream>
using namespace std;

int main()
{
   int i,n,m,j;
cout<<"enter row :-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int a[n][m];
int *p=&a[0][0];
int b[n];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>a[i][j];
}
}

for(i=0;i<n;i++)
{
cout<<"[";
for(j=0;j<m;j++)
{
cout<<*(p+i*n+j);
if(a[i][j]<<10)
{
cout<<"  ";
}
else
{
cout<<" ";
}
}
cout<<"]";
cout<<"\n";
}
cout<<"after reverse each row:-\n";

for(i=0;i<n;i++)
{
cout<<"[";
for(j=0;j<m;j++)
{
b[j]=a[i][j];
}
reverse(b+0,b+j);
for(j=0;j<m;j++)
{
cout<<b[j];
if(b[j]<10)
{
cout<<"  ";
}
else
{
cout<<" ";
}
}
cout<<"]";
cout<<"\n";
}

return 0;
}






