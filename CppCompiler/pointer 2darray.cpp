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
cout<<*(p+i*m+j);
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
cout<<"after reverse each collom:-\n";

for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
b[j]=a[j][i];
}
reverse(b+0,b+j);
for(j=0;j<n;j++)
{
a[j][i]=b[j];
}
}


for(i=0;i<m;i++)
{
cout<<"[";
for(j=0;j<n;j++)
{
cout<<*(p+i*m+j);
if((*(p+i*m+j))<10)
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






    