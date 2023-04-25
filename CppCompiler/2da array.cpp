#include<iostream>
using namespace std;
int array_size(int a[4][5])
{
int i,j;
for(i=0;i<4;i++)
{
for(j=0;j<5;j++)
{
cout<<a[i][j]<<" ";
}
}
}

 
int main()
{
 int i,j;
int a[4][5];
for(i=0;i<4;i++)
{
for(j=0;j<5;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>a[i][j];
}
}
array_size(a);
}

    