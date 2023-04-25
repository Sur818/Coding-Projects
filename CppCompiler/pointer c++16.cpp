#include<iostream>
using namespace std;

int find_fact(int *p)
{
int i,fact=1;
for(i=1;i<=*p;i++)
{
fact=fact*i;
}
return fact;
}

int main()
{
int n;
cout<<"enter no:-";
cin>>n;
cout<<find_fact(&n);
return 0;
}