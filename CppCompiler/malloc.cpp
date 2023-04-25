#include<iostream>
using namespace std;

int main()
{
 int *p,n,i;
cout<<"enter size:-";
cin>>n;
p=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
cin>>*(p+i);
}
for(i=0;i<n;i++)
{
cout<<*(p+i);
}
return 0;
}