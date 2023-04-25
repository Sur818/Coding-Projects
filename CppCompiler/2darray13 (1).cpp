#include<iostream>
using namespace std;

int main()
{
 int i,j,n,m,p,q;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;

cout<<"which collom want to exchange:-";
cin>>p>>q;

cout<<"\n\nenter element in array:-\n";
int a[n][n];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>a[i][j];
}
}

cout<<"\n\n entered element are:-\n\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<a[i][j]<<" ";
}
cout<<"\n";
}

for(i=0;i<n;i++)
{
swap(a[i][p-1],a[i][q-1]);
}

cout<<"\n\n after changing digonal------>\n\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<a[i][j]<<" ";
}
cout<<endl;
}
return 0;
}


