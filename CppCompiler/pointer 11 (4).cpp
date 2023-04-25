#include<iostream>
using namespace std;
void display (int *a,int n)
{
int i;
for(i=0;i<n;i++)
{
cout<<*(a+i)<<" ";
}
cout<<"\n";
}
int *delete_array(int *a,int n,int t)
{
int i,p,j,k=0;
while (k++<t)
{
cout<<"which  element want to delete:-";
cin>>p;
for(i=0;i<n;i++)
{
if(a[i]==p)
{
for(j=i;j<n-1;j++)
{
a[j]=a[j+1];
}
n--;
display(a,n);
}
}
}
return a;
}


int main()
{
 int i,n,t;
cout<<"enter size:-";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
cout<<"how many no want to delete:-";
cin>>t;
 delete_array (a,n,t);
}
    