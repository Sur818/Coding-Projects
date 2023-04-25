#include<iostream>
using namespace std;

int *array_sump(int a[],int n)
{
int i,j,count,ans=0,k,index,*b;
for(i=0;i<n;i++)
{
count=1;
k=0;
for(j=i;j<n;j++)
{
if(a[j+1]==a[j]+1)
{
count++;
}
if(ans<count)
{
index=i;
}
ans=max(ans,count);
}
}
cout<<"longest consiqutive subsequence:-"<<ans<<endl;
for(i=0;k<ans;i++)
{
b[k++]=a[i];
}
b[k++]='\0';
return b;
}

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
int *p=array_sump(a,n);
for(i=0;*(p+i)!='\0';i++)
{
cout<<*(p+i);
}
}