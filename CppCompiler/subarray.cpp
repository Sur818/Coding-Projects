#include<iostream>
using namespace std;
bool check_distinct(int b[],int k)
{
int i,j,flag=0;
for(i=0;i<k;i++)
{
for(j=i+1;j<k;j++)
{
if(b[i]==b[j])
{
flag++;
return false;
}
}
}
if(flag==0)
{
return true;
}
}

void print (int *b,int index,int index1)
{
int i;
cout<<"{";
for(i=index;i<=index1;i++)
{
cout<<b[i]<<" ";
}
cout<<"}";
cout<<"\n";
}


int arr_size(int a[],int n)
{
int i,j,ans=0,index,k=0,*b,index1;
for(i=0;i<n;i++)
{
k=0;
for(j=i;j<n;j++)
{
b[k++]=a[j];
if(check_distinct(b,k))
{
if(ans<k)
{
index=i;
index1=j;
}
ans=max(ans,k);
}
}
}
print(a,index,index1);
}





int main()
{
int i,n;
cout<<"enter size of array:-";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
cout<<"longest subarray who's all elements are different:-\n";
arr_size(a,n);
}

    