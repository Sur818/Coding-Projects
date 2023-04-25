#include<iostream>
using namespace std;
int array_size(int *a,int *n,int sum)
{
int i;
for(i=0;i<*n;i++)
{
sum=sum+a[i];
}
return sum;
}



int main()
{
int i,n;
cout<<"enter size:-";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
cout<<"sum of element in array:-";
cout<<array_size(a,&n,0);
}

    