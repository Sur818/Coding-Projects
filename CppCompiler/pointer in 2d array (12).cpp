include<iostream>
using namespace std;
int main()
{
 int i,j,n,m,count=1,pos,k,l=0;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
cout<<"entered first array:-\n";
int a[n][100];
int b[n][m];
int p[n][100];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>a[i][j];
}
}
cout<<"how many matrix want to be concat:-\n";
cin>>pos;
while(count++<=pos)
{
cout<<"entered element in next array:-\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"b["<<i<<"]["<<j<<"]=";
cin>>b[i][j];
}
}
k=-1;
for(i=0;i<n;i++)
{
k++;
l=0;
for(j=0;j<count*m;j++)
{
if(j<(count-1)*m)
p[i][j]=a[i][j];
else
p[i][j]=b[k][l++];
}
}

cout<<"after concatenation:-\n";
for(i=0;i<n;i++)
{
cout<<"[";
for(j=0;j<count*m;j++)
{
cout<<p[i][j]<<" ";
a[i][j]=p[i][j];
}
cout<<"]";
cout<<"\n";
}
}
}
    