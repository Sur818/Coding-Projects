#include<iostream>
using namespace std;
int submatrix(int arr[10][10],int n,int m,int p,int q)
{
int i,j,k1=0,k2=0,k,sum=0,ans=0;
for(k=0;k<p-n&&k<q-m;k++)
{
k1=0;
for(i=n;k1++<=k;i++)
{
k2=0;
for(j=m;k2++<=k;j++)
{
sum=sum+arr[i][j];
}
}
ans=max(ans,sum);
sum=0;
}
return ans;
}

void sub_matrix(int arr[10][10],int n,int m)
{
int i,j,ans=0,sum=0;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
sum=submatrix(arr,i,j,n,m);
ans=max(ans,sum);
}
}
cout<<ans<<endl;
}



int main()
{
cout<<"this program help you to find max sub of a subsqure matrix:-------\n\n";
int i,j,n,m;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int arr[10][10];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"arr["<<i<<"]["<<j<<"]=";
cin>>arr[i][j];
}
}
sub_matrix(arr,n,m);
}
    