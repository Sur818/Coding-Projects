#include<iostream>
using namespace std;

void print(int *arr,int n,int m)
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
int i,j,n,k,sum=0,p,q,m;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int arr1[n][m];
cout<<"enter elements in first  matrix:-\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"arr1["<<i<<"]["<<j<<"]=";
cin>>arr1[i][j];
}
} 
cout<<"enter row for second matrix:-";
cin>>p;
cout<<"enter collom:-";
cin>>q;
int arr2[p][q];
cout<<"enter element in second matrix:-\n";
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
cout<<"arr2["<<i<<"]["<<j<<"]";
cin>>arr2[i][j];
}
}
int b[n][q];
cout<<"enterd element in matrix are:-\n";
print((int *)arr1,n,m);
cout<<"entered element in second matrix are:-\n";
print((int *) arr2,p,q);
for(i=0;i<n;i++)
{
for(j=0;j<q;j++)
{
sum=0;
for(k=0;k<n;k++)
{
sum=sum+arr1[i][k]*arr2[k][j];
}
b[i][j]=sum;
}
}

cout<<"after multiplication:-\n";
print((int *)b,n,q);
}