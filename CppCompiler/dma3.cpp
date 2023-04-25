#include<iostream>
using namespace std;

int main()
{
int *p,i,n,sum=0;
cout<<"enter size of array:-";
cin>>n;
p=(int*)malloc(n*sizeof(int));
cout<<"enter element in array:-\n";
for(i=0;i<n;i++)
{
cout<<"*(p+"<<i<<"):-";
cin>>*(p+i);
}
for(i=0;i<n;i++)
{
cout<<*(p+i);
sum=sum+*(p+i);
}
cout<<"\nsum of element strored in array:-"<<sum;

return 0;
}