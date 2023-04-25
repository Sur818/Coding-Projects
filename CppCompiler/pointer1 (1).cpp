#include<iostream>
using namespace std;
int main()
{
int n,i;
int *ptr=&n;
cout<<"enter no:-";
cin>>*ptr;
for(i=1;i<*ptr;i++)
{
cout<<i<<endl;
}
return 0;
}