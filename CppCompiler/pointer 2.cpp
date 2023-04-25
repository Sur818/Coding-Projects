#include<iostream>
using namespace std;

int main()
{
int i,n;
cout<<"enter size:-";
cin>>n;
 int arr[n];
int *ptr=arr;
for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>*(ptr+i);
}
for(i=0;i<n;i++)
{
cout<<*(ptr+i)<<endl;
}
return 0;
}