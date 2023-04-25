#include<iostream>
using namespace std;

void print(int *arr,int n)
{
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<*(arr+i*n+j)<<" ";
}
cout<<"\n";
}
}


int main()
{
int i,j,n,k,sum=0;
cout<<"enter size:-";
cin>>n;
int arr1[n][n];
int arr2[n][n];
int b[n][n];
cout<<"enter elements in first  matrix:-\n";
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<"arr1["<<i<<"]["<<j<<"]=";
cin>>arr1[i][j];
}
} 
cout<<"enter element in second matrix:-\n";
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<"arr2["<<i<<"]["<<j<<"]";
cin>>arr2[i][j];
}
}

cout<<"enterd element in matrix are:-\n";
print((int *)arr1,n);
cout<<"entered element in second matrix are:-\n";
print((int *) arr2,n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
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
print((int *)b,n);
}