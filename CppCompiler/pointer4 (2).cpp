#include<iostream>
using namespace std;
void array_reverse(int *,int *);

int main()
{
int n,i;
cout<<"enter size:-";
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
array_reverse(arr,&n);
return 0;
}
void array_reverse(int *arr,int *n)
{
int i;
for(i=*n-1;i>=0;i--)
{
cout<<*(arr+i)<<" ";
}
}

