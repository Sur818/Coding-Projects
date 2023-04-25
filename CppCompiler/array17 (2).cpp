#include<iostream>
using namespace std;
void show (int arr[],int n);
/*void show(int arr[],int n)
{
int i;
for(i=0;i<n;i++)
{
cout<<arr[i]<<endl;
}
}*/

int main()
{
 int i,n,m,j,k=0,p;
cout<<"enter size:";
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
cout<<"how many elements want to delete:-";
cin>>p;
while (k++<p)
{
cout<<"enter element want to delete:-";
cin>>m;
for(i=0;i<n;i++)
{
if(arr[i]==m)
{
for(j=i;j<n-1;j++)
{
arr[j]=arr[j+1];
}
i--;
n--;
}
}
show(arr,n);
}
return 0;
}



void show(int arr[],int n)
{
int i;
for(i=0;i<n;i++)
{
cout<<arr[i]<<endl;
}
}
