#include<iostream>
using namespace std;

int main()
{
int n1,n2,i,k=0,median;
cout<<"enter size of first array:-";
cin>>n1;
int a1[n1];
cout<<"enter size of array:-\n";
for(i=0;i<n1;i++)
{
cout<<"a1["<<i<<"]=";
cin>>a1[i];
}
cout<<"enter size of second array:-";
cin>>n2;
int a2[n2];
cout<<"enter elements in second array:-\n";
for(i=0;i<n2+n1;i++)
{
if(i<n2)
{
cout<<"a2["<<i<<"]=";
cin>>a2[i];
}
else
{
a2[i]=a1[k++];
}
}
sort(a2,a2+(n1+n2));
cout<<"after sorting:-\n";
for(i=0;i<n1+n2;i++)
{
cout<<a2[i]<<endl;
}
if((n1+n2)/2==0)
{
median=(a2[((n1+n2)/2-1)]+a2[((n1+n2)/2)])/2;
}
else
{
median=a2[((n1+n2)/2)+1];
}
cout<<"median of both array="<<median<<endl;
}

    