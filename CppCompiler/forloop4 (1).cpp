#include<iostream>
using namespace std;

int main()
{
 int n,fact=1,i;
cout<<"enter no want to factorial:-";
cin>>n;
for(i=1;i<=n;i++)
{
fact=fact*i;
} 
cout<<"factorial of given no:-"<<fact<<endl;
return 0;
}