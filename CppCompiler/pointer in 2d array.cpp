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
cout<<"which two row are interchange:-";
cin>>a>>b;
if(a<n||b>m)
{
cout<<"out of bound:-";
}
else
{
for(i=0;i<n;i++)
{
temp=arr[a-1][i];
arr[a-1][i]=arr[b-1][i];
arr[b-1][i]=temp;
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




    