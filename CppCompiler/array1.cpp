#include<iostream>
using namespace std;

int main()
{
 int arr[10],i;
for(i=0;i<5;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
cout<<"elements in array are=\n";
for(i=0;i<5;i++)
{
cout<<arr[i]<<endl;
}
return 0;
}
