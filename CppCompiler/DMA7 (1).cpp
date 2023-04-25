#include<iostream>
using namespace std;
int *array_copy(int*p1,int*p2,int n)
{
int i;
for(i=0;i<n;i++)
{
p2[i]=p1[i];
}
return p2;
}
int main()
{
 int *p1,i,n,*p2;
cout<<"enter size:-";
cin>>n;
p2=(int*)malloc(n*sizeof(int));
p1=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
cout<<"*(p1+"<<i<<")=";
cin>>*(p1+i);
}
int *p=array_copy(p1,p2,n);
cout<<"after copying:---\n";
for(i=0;i<n;i++)
{
cout<<*(p2+i)<<" ";
}
return 0;
}



