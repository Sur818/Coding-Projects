#include<iostream>
using namespace std;
int *no_duplicate(int *,int );
int *duplicate (int*,int );
int main()
{
 int i,n;
cout<<"enter size:-";
cin>>n;
int a[n];
cout<<"enter element in array:-\n\n";
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
cout<<"duplicate element present in array:-\n\n";
int *p=no_duplicate(a,n);
for(i=0;*(p+i)!='\0';i++)
{
cout<<*(p+i)<<" ";
}
}

int *no_duplicate(int *a,int n)
{
int i,j,count=0,*p,k=0;
p=(int *)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
int temp=a[i];
for(j=0;j<n;j++)
{
if(i!=j)
{
if(a[i]==a[j]&&a[i]!='\0')
{
a[i]=NULL;
*(p+k)=temp;
k++;
}
else if(a[j]==temp)
{
a[j]=NULL;
}
}
}
}
return p;
}




