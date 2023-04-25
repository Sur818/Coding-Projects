#include<iostream>
using namespace std;

int main()
{
 int n,m,i,j;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int *arr;
arr=(int *)malloc(n*m*sizeof(int));
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cin>>*(arr+i*m+j);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<*(arr+i*m+j);
}
}
return 0;
}