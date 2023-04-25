#include<iostream>
using namespace std;
void array_size(int *arr,int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cout<<*(arr+i*c+j);
if(*(arr+i*c+j)<10)
{
cout<<"  ";
}
else
{
cout<<" ";
}
}
cout<<"\n";
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
arr[i][j]=i*10+j;
}
}
array_size((int *)arr,r,c);
}

    