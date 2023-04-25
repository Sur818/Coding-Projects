#include<iostream>
using namespace std;
bool isprime(int z)
{
int i,flag=0;
for(i=2;i<=z/2;i++)
{
if(z%i==0)
{
flag++;
break;
}
}
if(flag==0)
{
return true;
}
else
{
return false;
}
}


int*primeno(int *a,int n)
{
int i,*b,k=0;
b=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
if(isprime(a[i])&&a[i]!=1)
{
b[k++]=a[i];
}
}
return b;
}


int main()
{
 int a[10],i,n;
cout<<"enter size:-";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
int *p=primeno(a,n);
cout<<"{";
for(i=0;*(p+i)!='\0';i++)
{
cout<<*(p+i)<<" ";
}
cout<<"}";
}