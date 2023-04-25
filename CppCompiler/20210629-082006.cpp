#include<iostream>
using namespace std;
int array_size(int *arr,int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cout<<*(arr+i*c+j);
}
}
}

 
int main()
{
 int i,j,r,c;
cout<<"enter row:-";
cin>>r;
cout<<"enter collom:-";
cin>>c;
int arr[r][c];
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>arr[i][j];
}
}
array_size((int *)arr,r,c);
}

    