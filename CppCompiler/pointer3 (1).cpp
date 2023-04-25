#include<iostream>
using namespace std;

int main()
{
int i,n;
cout<<"enter size:-";
cin>>n;
char s[n];
char *ptr=s;
for(i=0;i<n;i++)
{
cout<<"s["<<i<<"]=";
cin>>*(ptr+i);
}
sort(ptr,ptr+n);
for(i=0;i<n;i++)
{
cout<<*(ptr+i);
}
}
