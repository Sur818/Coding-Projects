#include<iostream>
using namespace std;

int main()
{
 int i,j,n,m,k=0;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int arr[n][m];
int *p=&arr[0][0];
int b[n*m];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"arr["<<i<<"]["<<j<<"]=";
cin>>*(p+i*n+j);
b[k++]=*(p+i*n+j);
}
}
cout<<"after sorting 2d array:-\n\n";
sort(b,b+k);
k=0;
for(i=0;i<n;i++)
{
cout<<"[";
for(j=0;j<m;j++)
{
cout<<b[k++]<<" ";;
if(j==m-1)
{
cout<<"]";
cout<<"\n";
}
}
}
return 0;
}

