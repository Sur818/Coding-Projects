#include<iostream>
using namespace std;

int main()
{
   int i,n,m,j,k=0,l=0;
cout<<"enter row :-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int a[3][4];
int b[4][3];
int *p=&a[0][0];
int *p1=&b[0][0];
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>a[i][j];
}
}

for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
b[k][l]=a[i][j];
if(l>=3)
{
k++;
l=0;
}
l++;
}
}

for(i=0;i<4;i++)
{
for(j=0;j<3;j++)
{
cout<<b[i][j]<<" ";
}
cout<<"\n";
}


return 0;
}






    