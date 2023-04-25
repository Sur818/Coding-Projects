#include<iostream>
using namespace std;
int no_duplicate(int *,int *);
int main()
{
 int i,n;
cout<<"enter size:-";
cin>>n;
int a[n];
cout<<"ente6 element in array:-\n\n";
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}

cout<<"no of duplicate element:-"<<no_duplicate(a,&n);
}
int no_duplicate(int *a,int *n)
{
int i,j,count=0;
for(i=0;i<*n;i++)
{
for(j=i+1;j<*n;j++)
{
if(a[i]==a[j])
{
count++;
}
}
}
return count;
}


