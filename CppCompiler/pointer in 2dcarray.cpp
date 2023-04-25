#include<iostream>
using namespace std;

int main()
{
   int i,n,m,j,k=0,l=0;
cout<<"enter row :-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int a[n][m];
int b[m][n];
int *p=&a[0][0];
int *p1=&b[0][0];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>a[i][j];
}
}

cout<<"entered element are:-\n\n";
for(i=0;i<n;i++)
{
cout<<"[";
for(j=0;j<m;j++)
{
cout<<a[i][j]<<" ";
}
cout<<"]";
cout<<"\n";
}



for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
b[k][l++]=a[i][j];
if(l==n)
{
k++;
l=0;
}
}
}

cout<<"after conversion mxn into n×m:-\n";
for(i=0;i<m;i++)
{
cout<<"[";
for(j=0;j<n;j++)
{
cout<<b[i][j]<<" ";
}
cout<<"]";
cout<<"\n";
}


return 0;
}






    