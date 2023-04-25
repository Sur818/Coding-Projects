#include<iostream>
using namespace std;
int main()
{
long long int n;
cout<<"enter no";
cin>>n;
int arr[n],k=0,i;
for(i=0;n!=0;i++)
{
k++;
arr[i]=n%10;
n=n/10;
}
for(i=k-1;i>=0;i--)
{
cout<<arr[i]<<endl;
}
return 0;
}


    