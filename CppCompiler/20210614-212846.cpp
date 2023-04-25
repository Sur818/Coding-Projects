#include<iostream>
using namespace std;
void print(int *a,int index,int ans)
{
int i,k=0;
for(i=index;k++<ans;i++)
{
cout<<a[i];
}
cout<<"\n";
}

int array_sump(int a[],int n)
{
int i,j,count,ans=0,k,index;
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
print(a,index,ans);
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
array_sump(a,n);
}