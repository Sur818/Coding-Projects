#include<iostream>
using namespace std;
void print(int *[100],int,int);

int main()
{
 int i,j,n,m,r;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int arr[n][m];
int b[n];
int *p=&arr[0][0];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"arr["<<i<<"]["<<j<<"]=";
cin>>*(p+i*m+j);
}
}

for(i=0;i<n;i++)
{
cout<<"[";
for(j=0;j<m;j++)
{
cout<<arr[i][j];
if(arr[i][j]<10)
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




cout<<"which row want to reverseq -\n\n";
cin>>r;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
b[j]=*(p+i*m+j);
}
if(i==r-1)
{
reverse(b+0,b+j);
for(j=0;j<n;j++)
{
arr[i][j]=b[j];
}
}
}

for(i=0;i<n;i++)
{
cout<<"[";
for(j=0;j<m;j++)
{
cout<<arr[i][j];
if(arr[i][j]<10)
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

return 0;
}


