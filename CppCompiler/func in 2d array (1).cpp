#include<iostream>
using namespace std;
void print(int *arr,int *b,int n)
{
int i,j,k=0;
for(i=0;i<n;i++)
{cout<<"[";
for(j=0;j<n;j++)
{
if(i==j)
cout<<b[k++]<<" ";
else
cout<<*(arr+i*n+j)<<" ";
}
cout<<"]";
cout<<"\n";
}
}

int main()
{
int i,j,n,k=0,*b;
cout<<"enter size of square matrix:-";
cin>>n;
int arr[n][n];
b=(int *)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<"arr["<<i<<"]["<<j<<"]=";
cin>>arr[i][j];
if(i==j)
b[k++]=arr[i][j];
}
}
cout<<"entered matrix are:-\n";
for(i=0;i<n;i++)
{cout<<"[";
for(j=0;j<n;j++)
{
cout<<arr[i][j]<<" ";
}
cout<<"]";
cout<<"\n";
}
cout<<"\n\n";

reverse(b,b+k);
print((int *)arr,b,n);
}
