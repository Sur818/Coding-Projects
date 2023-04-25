#include<iostream>
using namespace std;
int array_gess(int *,int );
void print(int*,int ,int ,int);
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
array_gess(a,n);
return 0;
}



int array_gess(int *a,int n)
{
int i,j,sum=0,index1,index2,k;
for(i=0;i<n;i++)
{
sum=0;
for(j=i;j<n;j++)
{
sum=sum+a[j];
for(k=1;k<=5;k++)
{
if(sum+(-k)==0)
{
index1=i;
index2=j;
print(a,index1,index2,k);
}
}
}
}
}

void print(int* a,int n,int m,int k)
{
int i;
cout<<"{";
for(i=n;i<=m;i++)
{
cout<<a[i]<<" ";
}
cout<<"}";
cout<<"gess==="<<k<<"\n";
}




    