#include<iostream>
using namespace std;
void array_size(int *arr,int r,int c)
{
int *b,*d,k=0,l=0,i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(*(arr+i*c+j)%2==0)
b[k++]=*(arr+i*c+j);
else
d[l++]=*(arr+i*c+j);
}
}
cout<<"even element are:-\n";
for(i=0;i<k;i++)
{
cout<<b[i]<<" ";
}
cout<<"\nodd element are:-\n";
for(i=0;i<l;i++)
{
cout<<d[i]<<" ";
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

    