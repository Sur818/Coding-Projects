#include<iostream>
using namespace std;

int main()
{
 int i,j,n,m;
cout<<"enter size of square matrix:-\n";
cin>>n;
int arr[n][n];
int *p=&arr[0][0];
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<"arr["<<i<<"]["<<j<<"]=";
cin>>*(p+i*n+j);
if(i>j)
{
*(p+i*n+j)=0;
}
}
}
cout<<"setting lower tranguler matrix to be zero:-\n\n";
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<*(p+i*n+j)<<" ";
}
cout<<"\n";
}
return 0;
}

