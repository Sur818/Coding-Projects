#include<iostream>
using namespace std;
void print(int *b,int k)
{
int i;
cout<<"{";
for(i=0;i<k;i++)
{
cout<<b[i];
}
cout<<"}";
cout<<"\n";
}


void ispalindrome (int*b,int k)
{
int i,c[k],flag=0;
for(i=0;i<k;i++)
{
c[i]=b[k-1-i];
}
for(i=0;i<k;i++)
{
if(c[i]!=b[i])
{
flag++;
break;
}
}
if(flag==0)
{
//print(b,k);
}
}

void array_longest(int *a,int n)
{
cout<<" all possiblepelindrome array:--\n";
int i,j,*b,ans=0,k=0,index;
for(i=0;i<n;i++)
{
b[k++]=a[i];
for(j=0;j<n;j++)
{
if(j!=i)
{
b[k++]=a[j];
print(b,k);
ispalindrome(b,k);
}
}
k=0;
}
cout<<"\n";
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
array_longest(a,n);
}