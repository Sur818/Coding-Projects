#include<iostream>
using namespace std;
int add(int a,int b)
{
return a+b;
}
int main()
{
int a,b;
cout<<"enter two no";
cin>>a>>b;
int temp=add(a,b);
cout<<temp;
return 0;
}