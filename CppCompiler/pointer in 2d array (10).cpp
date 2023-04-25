#include<iostream>
using namespace std;
int **array_merge(int *a,int *b,int n,int m)
{
int i,j,**c,k,t;
c=new int*[n];
for(i=0;i<n;i++)
{
c[i]=new int[2*m];
}
k=-1,t=0;
for(i=0;i<n;i++)
{
k++;
t=0;
for(j=0;j<2*m;j++)
{
if(j<m)
c[i][j]=*(a+i*m+j);
else
c[i][j]=*(b+k*m+(t++));
}
}

return c;
}

int main()
{
 int i,j,n,m;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
cout<<"entered first array:-\n";
int a[n][m];
int b[n][m];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>a[i][j];
}
}
cout<<"entered second array:-\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"b["<<i<<"]["<<j<<"]=";
cin>>b[i][j];
}
}

cout<<"after concatenation:-\n";
int **p=array_merge((int*)a,(int *)b,n,m);
for(i=0;i<n;i++)
{
for(j=0;j<2*m;j++)
{
cout<<p[i][j]<<" ";
}
cout<<"\n";
}
}
