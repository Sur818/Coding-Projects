#include<iostream>
using namespace std;
void array_size(int *arr,int r)
{
int i,j;
cout<<"entered element are:-\n";
for(i=0;i<r;i++)
{
for(j=0;j<r;j++)
{
cout<<*(arr+i*r+j)<<" ";
}
cout<<"\n";
}
cout<<"upper tranguler element are;-\n";
for(i=0;i<r;i++)
{
for(j=0;j<r;j++)
{
if(i<j)
{
cout<<*(arr+i*r+j)<<" ";
}
}
}
}

int main()
{
 int i,j,r,;
cout<<"enter size of square matrix:-";
cin>>r;
int arr[r][r];
for(i=0;i<r;i++)
{
for(j=0;j<r;j++)
{
cout<<"arr["<<i<<"]["<<j<<"]=";
cin>>arr[i][j];
}
}
array_size((int *)arr,r);
}

    