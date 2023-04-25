#include<iostream>
using namespace std;
void print(int *arr,int n,int m)
{
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<*(arr+i*m+j);
if(*(arr+i*m+j)<10)
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


void arry_reverse(int *arr,int n,int m)
{
int i,j;
int *b;
//b=new int[m];
cout<<"\n entered element are:-\n";
print(arr,n,m);
cout<<"after reversing each row:-\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
b[j]=*(arr+i*m+j);
}
reverse(b+0,b+j);
for(j=0;j<m;j++)
{
cout<<b[j]<<" ";
}
cout<<"\n";
}
cout<<"\n";
}






int main()
{
int i,j,n,m;
cout<<"enter row:-";
cin>>n;
 cout<<"enter collom:-";
cin>>m; 
int arr[n][m];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"arr["<<i<<"]["<<j<<"]=";
cin>>arr[i][j];
}
}
arry_reverse((int *)arr,n,m);
}