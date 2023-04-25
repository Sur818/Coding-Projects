#include<iostream>
using namespace std;

int main()
{
int *p,i,n1,n2;
cout<<"enter size of array:-";
cin>>n1;
p=(int*)malloc(n1*sizeof(int));
for(i=0;i<n1;i++)
{
cout<<"*(p+"<<i<<")=";
cin>>*(p+i);
}
cout<<"enter new size:-";
cin>>n2;
p=(int*)realloc(p,n2*sizeof(int));
for(i=n1;i<n2;i++)
{
cout<<"*(p+"<<i<<")=";
cin>>*(p+i);
}
for(i=0;i<n2;i++)
{
cout<<*(p+i)<<" ";
}
return 0;
}
 