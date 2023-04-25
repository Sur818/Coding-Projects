#include<iostream>
using namespace std;
int *array_min(int*,int);
int main()
{
  int *p,n,i;
cout<<"enter size of array:-";
cin>>n;
p=new int[n];
for(i=0;i<n;i++)
{
cout<<"*(p+"<<i<<")=";
cin>>*(p+i);
}
int *p1=array_min(p,n);
cout<<"min distance between two element:-"<<*p1;
}


int *array_min(int*p,int n)
{
int i,*ans=&p[0],temp;
sort(p,p+n);
for(i=0;*(p+i+1)!='\0';i++)
{
temp=p[i+1]-p[i];
*ans=min(*ans,temp);
}
return ans;
}


