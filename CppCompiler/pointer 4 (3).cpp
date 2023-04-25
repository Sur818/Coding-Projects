#include<iostream>
using namespace std;
int  *array_size(int *arr,int n)
{
int i,j,sum=0;
int *arr2;
for(i=0;i<n;i++)
{
arr2[i]=arr[i];
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
    cout<<"insert element in first array:--\n";
    for(i=0;i<n;i++)
    {
    cout<<"a["<<i<<"]=";
    cin>>a1[i];
    }
    cout<<"copy one array element into other array:--\n\n";
    int *p=array_size(a1,n);
    for(i=0;i<n;i++)
    {
    cout<<*(p+i)<<" ";
    }
    }