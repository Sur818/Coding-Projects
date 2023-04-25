#include<iostream>
using namespace std;
bool arr(int [],int ,int ,int );

int main()
{

 int i,n,k,x;
cout<<"enter size:-";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
cout<<"enter segment:-";
cin>>k;
cout<<"enter value:-";
cin>>x;
if(arr(a,n,x,k))
{
cout<<"yes!";
}
else
{
cout<<"not!";
}
}

bool arr(int a[],int n,int x,int k)
{
int i,j;
for(i=0;i<n;i+=k)
{
for(j=0;j<k;j++)
{
if(a[i+j]==x)
{
break;
}
if(j==k)
return false;
}
}
if(i==n)
return true;
for (j=i-k; j<n; j++)

      if (a[j] == x)

          break;

    if (j == n)

       return false; 
    
    
    
    
    return true;
}


    