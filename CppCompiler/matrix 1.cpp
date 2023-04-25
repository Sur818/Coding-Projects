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
  int i,j,n,temp;
cout<<"enter size:-";
cin>>n;
int a[n][n];
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>a[i][j];
}
}
cout<<"\n entered array are:-\n";
print((int *)a,n);
cout<<"\n";
for(i=0;i<n;i++)
{
for(j=0;j<i;j++)
{
temp=a[i][j];
a[i][j]=a[j][i];
a[j][i]=temp;
}
}
cout<<"after exchange lower tranguler matrix in to uper tranguler matrix:-\n\n";
print((int *)a,n);
}












    