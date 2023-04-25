#include<iostream>
using namespace std;
void print(int *[100],int,int);

int main()
{
 int i,j,n,m,r,flag=0;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int arr1[n][m];
int arr2[n][m];
int *p1=&arr1[0][0];
int *p2=&arr2[0][0];
cout<<"enter elment in first array:-\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"arr1["<<i<<"]["<<j<<"]=";
cin>>*(p1+i*m+j);
}
}

for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<arr1[i][j];
if(arr1[i][j]<10)
{
cout<<"  ";
}
else
{
cout<<" ";
}
}
cout<<"]";
cout<<"\n";
}
cout<<"enter element in second array:-\n";

for(i=0;i<n;i++)
{
cout<<"[";
for(j=0;j<m;j++)
{
cout<<"arr2["<<i<<"]["<<j<<"]=";
cin>>*(p2+i*n+j);
}
}



for(i=0;i<n;i++)
{
cout<<"[";
for(j=0;j<m;j++)
{
cout<<arr2[i][j];
if(arr2[i][j]<10)
{
cout<<"  ";
}
else
{
cout<<" ";
}
}
cout<<"]";
cout<<"\n";
}

for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(arr1[i][j]!=arr2[i][j])
{
flag++;
}
}
}
if(flag==0)
{
cout<<"equal matrix:-";
}
else
{
cout<<"not equal matrix:-";
}
}






    