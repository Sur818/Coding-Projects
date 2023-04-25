#include<iostream>
using namespace std;

int main()
{
int i,j,n,m,a,b,temp;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int arr[n][m];
int *p=&arr[0][0];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>*(p+i*m+j);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<*(p+i*m+j)<<" ";
}
cout<<"\n";
}
cout<<"which two collom are interchange:-";
cin>>a>>b;
if(a<1||b>m)
{
cout<<"out of bound:-";
}
else
{
for(i=0;i<n;i++)
{
temp=arr[i][a-1];
arr[i][a-1]=arr[i][b-1];
arr[i][b-1]=temp;
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<*(p+i*m+j)<<" ";
}
cout<<"\n";
}
}
return 0;
}




    