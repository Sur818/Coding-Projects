#include<iostream>
using namespace std;
void submarix(int a[10][10],int n,int m,int k)
{
int i,j,k1=0,k2=0;
for(i=n;k1++<k;i++)
{
k2=0;
cout<<"[";
for(j=m;k2++<k;j++)
{
cout<<a[i][j]<<" ";
}
cout<<"]";
cout<<"\n";
}
cout<<"\n\n";
}





int main()
{
cout<<"all possible submarix of given order:-\n";
 int i,j,k,n,m;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int a[10][10];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>*(*(a+i)+j);
}
}
cout<<"enter sub square matrix order:-\n";
cin>>k;
if(k>min(n,m))
{
cout<<"invalid operation:-\n";
}
else
{
for(i=0;i<n;i++)
{
cout<<"[";
for(j=0;j<m;j++)
{
cout<<a[i][j]<<" ";
}
cout<<"]";
cout<<"\n";
}


for(i=0;i<n-k+1;i++)
{
for(j=0;j<m-k+1;j++)
{
submarix(a,i,j,k);
}
}
}
return 0;
}

    