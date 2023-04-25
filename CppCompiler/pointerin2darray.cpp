#include<iostream>
using namespace std;

void print(int (*p)[4])
{
int i,j;
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
cout<<p[i][j];
}
}
}

int main()
{
int i,j;
int arr[3][4];
int (*p)[4]=arr;
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
cout<<"arr["<<i<<"]["<<j<<"]=";
cin>>*(*(p+i)+j);
}
}
print(arr);
}


