#include<iostream>
using namespace std;
int **arry_aum(int *arr1,int *arr2,int n)
{
int i,j,**b;
for(i=0;i<n;i++)
{
b[i]=(int *)malloc(sizeof(int*)*n);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
b[i][j]=*(arr1+i*n+j)+*(arr2+i*n+j);
}
cout<<"\n";
}
return b;
}

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
int i,j,n;
cout<<"enter size:-";
cin>>n;
int arr1[n][n];
int arr2[n][n];
int **p;
cout<<"enter elements in first matrix:-\n";
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
cout<<"arr2["<<i<<"]"<<j<<"]";
cin>>arr2[i][j];
}
}

cout<<"entered first array are:-\n";
print((int *)arr1,n);
cout<<"entered second array are:-\n";
print((int *)arr2,n);
cout<<"sum of both matrix:-\n";
p=arry_aum((int *)arr1,(int *)arr2,n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",p[i][j]);
}
cout<<"\n";
}
}