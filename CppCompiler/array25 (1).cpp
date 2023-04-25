#include<iostream>
using namespace std;
int missing_no(int [],int);
int main()
{
   int i,j,n;
cout<<"enter size:-";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
sort(a,a+n);
cout<<"mssing no:-"<<missing_no(a,n);
return 0;
}



int missing_no(int *a,int n)
{
int i,sum=0;
for(i=0;i<n;i++)
{
sum=sum+*(a+i);
}
n=n+1;
return (n*(n+1))/2-sum;
}
