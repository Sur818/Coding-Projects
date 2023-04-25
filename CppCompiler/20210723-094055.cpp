#include<iostream>
using namespace std;
void print(int arr[],int index1,int index2)
{
int i;
for(i=index1;i<=index2;i++)
{
cout<<arr[i]<<" ";
}
}



void max_prod(int a[],int n)
{
int i,j,prod,ans=0,index1,index2;
for(i=0;i<n;i++)
{
prod=1;
for(j=i;j<n;j++)
{
prod=prod*a[j];
if(ans<prod)
{
index1=i;

}
ans=max(ans,prod);
}
}
print(a,index1,index2);
}




int main()
{
int n,i;
cout<<"enter size:-";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
cout<<"longest subarray whoose product are max:-\n";
max_prod(a,n);
}