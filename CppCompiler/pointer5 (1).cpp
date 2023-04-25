#include<iostream>
using namespace std;
int *array_unique(int *a,int n)
{
int *p,i,k=0,flag=0,j;
p=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
flag=0;
for(j=0;j<n;j++)
{
if(i!=j)
{
if(a[i]==a[j])
{
flag=1;
}
}
}
if(flag==0)
{
*(p+k)=a[i];
k++;
}
}
return p;
}
 
int main()
{
cout<<"this program print unique element in Array:-\n\n";
int i,n,flag=0,j;
cout<<"enter size of Array:-";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
int *p=array_unique(a,n);
for(i=0;*(p+i)!='\0';i++)
{
cout<<*(p+i)<<" ";
}
return 0;
}
