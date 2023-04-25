#include<iostream>
using namespace std;

int main()
{
int n,i,sum=0;
cout<<"enter size:-";
cin>>n;
 int arr[n];
for(i=0;i<5;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
sum=sum+arr[i];
}
cout<<"sum of elements in array are:-\n"<<sum;
return 0;
}
