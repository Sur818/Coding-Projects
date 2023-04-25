#include<iostream>
using namespace std;
bool check_magicsqure(int *a,int n)
{
int i,j,f=0,sumd1=0,sumd2=0,sumr=0,sumc=0;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i==j)
{
sumd1=sumd1+*(a+i*n+j);
}
if(i+j==n-1)
{
sumd2=sumd2+*(a+i*n+j);
}
}
}
if(sumd1!=sumd2)
{
f=1;
}
else
{
for(i=0;i<n;i++)
{
sumr=0;sumc=0;
for(j=0;j<n;j++)
{
sumr=sumr+*(a+i*n+j);
sumc=sumc+*(a+i*n+j);
}
if(sumr!=sumd1)
{
f=1;
}
else if(sumc!=sumd1)
{
f=1;
}
}
if(f==0)
{
return true;
}
else
{
return false;
}
}
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
if(check_magicsqure((int *)arr,n))
{
cout<<"magic squre matrix:-";
}
else
{
cout<<"not magic squre matrix:-";
}
}