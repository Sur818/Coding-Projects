#include<iostream>
using namespace std;
void print(int *arr,int n,int m)
{
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<*(arr+i*n+j);
if(*(arr+i*n+j)<10)
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


void arry_delete(int *arr,int n,int m)
{
int i,j,c;
cout<<"\n entered element are:-\n";
print(arr,n,m);
cout<<"which collom want to delete:-";
cin>>c;
for(i=0;i<n;i++)
{
for(j=c-1;j<m-1;j++)
{
*(arr+i*n+j)=*(arr+i*n+j+1);
}
}
print(arr,n,m-1);
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
//print((int *)arr,n,m);
/*for(i=0;i<n;i++)
{
for(j=1;j<m-1;j++)
{
arr[i][j]=arr[i][j+1];
}
}*/

/*for(i=0;i<n;i++)
{
for(j=0;j<m-1;j++)
{
cout<<arr[i][j]<<" ";
}
cout<<"\n";
}
cout<<"\n\n";
print((int*)arr,n,m-1);*/
arry_delete((int *)arr,n,m);
}