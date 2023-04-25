#include<iostream>
using namespace std;
void array_print(int *p,int n,int m)
{
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<*(p+i*m+j);
}
cout<<"\n";
}
}
int main()
{
int n,m,i,j;
cout<<"enter row:-";
cin>>n;
cout<<"enr3 collom:-";
cin>>m;
int a[n][m];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>a[i][j];
}
}
array_print(&a[0][0],n,m);
}