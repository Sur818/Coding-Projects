#include<iostream>
using namespace std;

int main()
{
cout<<"this program is conversion of n×m  matrix in to m×n---------\n\n";
  int i,j,n,m,k=0,l=0;
cout<<"enter row";
cin>>n;
cout<<"enter collom:-";
cin>>m;
//43to34
int a[n][m];
int b[m][n];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>a[i][j];
}
}

cout<<"input matrix are:-\n";
for(i=0;i<n;i++)
{
cout<<"[";
for(j=0;j<m;j++)
{
cout<<a[i][j];
if(a[i][j]<10)
{
cout<<"   ";
}
else
{
cout<<"  ";
}
}
cout<<"]";
cout<<"\n";
}

cout<<"\n"<<"After conversation:--------"<<"\n";
if(n>m)
{
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(k>n-1)
{
l++;
k=0;
}
b[l][k++]=a[i][j];
}
}
}

/*for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<b[i][j]<<" ";
}
cout<<"\n";
}*/









//34to43
/*int p=m-n;
int a[n][m];
int b[n][n];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>a[i][j];
}
}*/

if(n<m)
{
int p=m-n;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(k>m-(p+1))
{
l++;
k=0;
}
b[l][k++]=a[i][j];
}
}
}

for(i=0;i<m;i++)
{
cout<<"[";
for(j=0;j<n;j++)
{
cout<<b[i][j];
if(b[i][j]<10)
{
cout<<"   ";
}
else
{
cout<<"  ";
}
}
cout<<"]";
cout<<endl;
}
return 0;
}




    