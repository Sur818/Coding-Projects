#include<iostream>
using namespace std;
bool check_identity(int *arr,int n,int m)
{
int i,j,flag=0;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(i==j&&*(arr+i*m+j)!=1)
return false;
else if(i!=j&&*(arr+i*m+j)!=0)
return false;
}
}
return true;
}



void print(int *arr ,int n,int m)
{
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<*(arr+i*m+j)<<" ";
}
cout<<"\n";
}
}


int main()
{
 int i,n,m,j,k,sum=0;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int a[n][m];
int b[m][n];
int c[m][m];

for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>a[i][j];
}
}
cout<<"entered matrix are:-\n";
print((int*)a,n,m);
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
b[j][i]=a[i][j];
}
}

cout<<"Transpose of matrix are:-\n";
print((int *)b,n,m);

for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
{
sum=0;
for(k=0;k<m;k++)
{
sum=sum+a[i][k]*b[k][j];
}
c[i][j]=sum;
}
}
cout<<"after multiplication of A*A^T-\n";
print((int *)c,m,m);
if(check_identity((int *)c,m,m))
{
cout<<"matrix are orthogonal:-";
}
else
{
cout<<"matrix are not orthogonal:-";
}
return 0;
}


