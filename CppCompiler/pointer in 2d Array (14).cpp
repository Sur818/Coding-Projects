#include<iostream>
using namespace std;

int main()
{
 int i,j,n,m,count1=0,p,q,k=0,l=0,u=0,t=0,s,b=0;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int a1[n][m];
cout<<"enter element in first array:-\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>a1[i][j];
}
}

cout<<"enter row:-\n";
cin>>p;
cout<<"enter collom:-\n";
cin>>q;
int a2[p][q];
cout<<"enter element in second array:-\n";
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
cout<<"a2["<<i<<"]["<<j<<"]=";
cin>>a2[i][j];
}
}

cout<<"enter resize row:-";
cin>>s;
cout<<"enter resize collom:-";
cin>>t;
int a3[s][t];
for(i=0;i<s;i++)
{
for(j=0;j<t;j++)
{
if(++count1<=p*q)
{
a3[i][j]=a2[b][l++];
if(l==q)
{
b++;
l=0;
}
}
else
{
a3[i][j]=a1[k][u++];
if(u==m)
{
k++;
u=0;
}
}
}
}



for(i=0;i<s;i++)
{
for(j=0;j<t;j++)
{
cout<<a3[i][j]<<" ";
}
cout<<"\n";
}

}








