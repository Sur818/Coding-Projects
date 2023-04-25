#include<iostream>
using namespace std;

int main()
{
  int i,j,n,m,sum=0,row[10],collom[10];
cout<<"enter row :-";
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
sum=0;
}

for(i=0;i<n;i++)
{
row[i]=0;
for(j=0;j<m;j++)
{
row[i]=row[i]+a[i][j];
}
}

for(j=0;j<m;j++)
{
collom[j]=0;
for(i=0;i<n;i++)
{
collom[j]=collom[j]+a[i][j];
}
}



for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<a[i][j]<<"  ";
}
cout<<" "<<"=  "<<row[i];
cout<<"\n";
}
cout<<"\n";
for(i=0;i<n;i++)
{
cout<<collom[i]<<"  ";
}
return 0;
}
