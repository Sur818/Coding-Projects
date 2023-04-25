#include<iostream>
using namespace std;

int main()
{
int *p,n,i;
cout<<"enter size of array:-";
cin>>n;
p=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
cout<<"*(p+"<<i<<")=";
cin>>*(p+i);
}
cout<<"reverse of array:-\n";
for(i=n-1;i>=0;i--)
{
cout<<*(p+i);
}
return 0;
}
    