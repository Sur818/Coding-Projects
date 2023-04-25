#include<iostream>
using namespace std;
int  *array_size(int *arr,int *arr2,int n)
{
int i,j,sum=0;
for(i=0;i<n;i++)
{
sum=0;
for(j=0;j<n;j++)
{
sum=sum+arr[i]*arr[j];
}
arr2[i]=sum;
}
return arr2;
}

int main()
{
    int n,i,j;
    cout<<"enter size:-";
    cin>>n;
    int a1[n];
    int a2[n];
    for(i=0;i<n;i++)
    {
    cout<<"a["<<i<<"]=";
    cin>>a1[i];
    }
    for(i=0;i<n;i++)
    {
    cout<<"a2["<<i<<"]=";
    cin>>a2[i];
    }
    int *p=array_size(a1,a2,n);
    for(i=0;i<n;i++)
    {
    cout<<*(p+i)<<" ";
    }
    }