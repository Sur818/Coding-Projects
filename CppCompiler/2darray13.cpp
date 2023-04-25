#include<iostream>
using namespace std;

int main()
{
 int i,j,n,temp,k,l;
cout<<"enter size:-";
cin>>n;

int a[n][n];
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>a[i][j];
}
}

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<a[i][j]<<" ";
}
cout<<"\n";
}

for(i=0;i<n;i++)
{
swap(a[i][i],a[i][n-1-i]);
}

cout<<"\n\n after changing digonal------>\n\n";
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<a[i][j]<<" ";
}
cout<<endl;
}
return 0;
}


