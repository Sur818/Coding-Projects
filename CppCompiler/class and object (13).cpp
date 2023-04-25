#include<iostream>
using namespace std;
class twodarray
{
public :
int n,m,i,j;
int **a;
twodarray(int x,int y)
{
n=x;
m=y;
*a=new int[n];
for(i=0;i<n;i++)
{
a[i]=new int[m];
}
}

int **input()
{
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>a[i][j];
}
}
return a;
}
};


int main()
{
int n,m,i,j,**p;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
twodarray obj(n,m);
*p=new int[n];
for(i=0;i<n;i++)
{
p[i]=new int[m];
}
p=obj.input();
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<p[i][j]<<" ";
}
cout<<"\n";
}
}


    