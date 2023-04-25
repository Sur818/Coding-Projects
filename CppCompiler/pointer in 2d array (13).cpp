#include<iostream>
using namespace std;
void delete_array(int *a,int n,int m,int c)
{
int i,j,*b,k=0,l=0;
b=new int[n+m];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
b[k++]=*(a+i*m+j);
}
}

for(i=0;i<k;i++)
{
if(b[i]==c)
{
for(j=i;j<k;j++)
{
b[j]=b[j+1];
}
k--;
}
}


for(i=0;i<n;i++)
{
cout<<"[";
for(j=0;j<m;j++)
{
if(l<k)
cout<<b[l++]<<" ";
}
cout<<"]";
cout<<"\n";
}
}

int main()
{
int i,j,n,m,c;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
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
cout<<"which no want to delete:-";
cin>>c;
delete_array((int *)a,n,m,c);
}


