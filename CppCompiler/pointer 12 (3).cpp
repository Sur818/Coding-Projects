#include<iostream>
using namespace std;
int subarr(int *b,int k)
{
int sum=0,i;
for(i=0;i<k;i++)
{
sum=sum+b[i];
}

return sum;
}


int average(int *a,int n)
{
int i,j,temp,ans=0,k=0,*b;
int index1,index2;
for(i=0;i<n;i++)
{
b[k++]=a[i];
for(j=i+1;j<n;j++)
{
b[k++]=a[j];
temp=subarr(b,k);
if(ans<temp)
{
index1=i;
index2=j;
}
ans=max(ans,temp);
}
k=0;
}
cout<<"the longest subarray whoo's sum are max:--\n";
for(i=index1;i<=index2;i++)
{
cout<<a[i]<<" ";
}
cout<<"\n";
return ans;
}

int main()
{
   int i,n;
cout<<"enter size :-";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
cout<<average(a,n);
}
 