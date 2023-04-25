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
int i,j;
cout<<"entered element are:-\n";
print(arr,r);
cout<<" settings lower tranguler matrix to be zero are;-\n";
for(i=0;i<r;i++)
{
for(j=0;j<r;j++)
{
if(i>j)
{
*(arr+i*r+j)=0;
}
}
}
print(arr,r);
}

int main()
{
 int i,j,r;
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

    