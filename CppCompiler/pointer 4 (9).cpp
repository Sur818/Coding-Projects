#include<iostream>
using namespace std;
char *array_reverse(char *a,int l,char*a1)
{
int i;
for(i=0;i<l;i++)
{
a1[i]=a[l-1-i];
}
return a1;
}



int main()
{
  char ar[100];
char a[10];
char *p=ar;
char *a1;
cout<<"enter string:-";
gets(ar);
int i,n,j,l=0,k=0;
n=strlen(ar);
ar[n]=' ';
for(i=0;i<n+1;i++)
{
if(*(p+i)==' ')
{
for(j=k;j<i;j++)
{
a[l++]=ar[j];
}
char *p1=array_reverse(a,l,a1);
for(j=0;j<l;j++)
{
cout<<*(p1+j);
}
cout<<" ";
k=i+1;
l=0;
}
}
return 0;
}



    