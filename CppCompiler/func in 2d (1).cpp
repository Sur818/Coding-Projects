#include<iostream>
using namespace std;
void print(int *arr,int r)
{
int i,j;
for(i=0;i<r;i++)
{
for(j=0;j<r;j++)
{
cout<<*(arr+i*r+j)<<" ";
}
cout<<"\n";
}
}

void array_size(int *arr,int r)
{
int i,j,sum=0;
cout<<"entered element are:-\n";
print(arr,r);
for(i=0;i<r;i++)
{
for(j=0;j<r;j++)
{
if(i==j)
sum=sum+*(arr+i*r+j);
}
}
cout<<"sum of main diagonal:-"<<sum;
}


int main()
{
 int i,j,r;
cout<<"enter size of squre :-";
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

    