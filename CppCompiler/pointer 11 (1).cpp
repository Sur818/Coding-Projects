#include<iostream>
using namespace std;
int *array_merge(int *a1,int *a2,int n,int n1)
{
int k=n,i;
for(i=0;i<n1;i++)
{
a1[k++]=a2[i];
}
return a1;
}



int main()
{
 int i,n,n1;
cout<<"enter size:-";
cin>>n;
int a1[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a1[i];
}
cout<<"ente6 size:-";
cin>>n1;
int a2[n1];
for(i=0;i<n1;i++)
{
cout<<"a2["<<i<<"]=";
cin>>a2[i];
}
cout<<"\n after merging:--\n\n";
int *p=array_merge(a1,a2,n,n1);
for(i=0;i<n+n1;i++)
{
cout<<*(p+i)<<" ";
}
return 0;
}

