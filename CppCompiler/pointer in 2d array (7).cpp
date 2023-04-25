#include<iostream>
using namespace std;
bool check_identity(int *a,int n)
{
int i,j, flag=0;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i==j)
{
if(*(a+i*n+j)==0)
{
flag++;
return false;
}
}
else
{
if(*(a+i*n+j)!=0)
{
flag++;
return false;
}
}
}
}
if(flag==0)
return true;
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
int arr[n][n];
cout<<"enter elements in matrix:-\n";
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<"arr1["<<i<<"]["<<j<<"]=";
cin>>arr[i][j];
}
}
cout<<"enter element in matrix are:-\n";
print((int *)arr,n);
if(check_identity((int *)arr,n))
{
cout<<"identity matrix:-";
}
else
{
cout<<"not identity matrix:-";
}
}