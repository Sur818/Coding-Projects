#include<iostream>
using namespace std;

int main()
{
 int i,j,n;
cout<<"enter size:-";
cin>>n;
int a[n][n];
int *p=&a[0][0];
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>*(p+i*n+j);
}
}

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<*(p+i*n+j)<<" ";
}
cout<<"\n";
}

cout<<"element of lower tranguler matrix:-\n";
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(j<i)
{
cout<<*(p+i*n+j)<<" ";
}
}
}
return 0;
}








    