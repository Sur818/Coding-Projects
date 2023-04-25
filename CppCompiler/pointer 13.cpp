#include<iostream>
using namespace std;
bool istwongt(int b[],int k)
{
int i,count=0;
for(i=0;i<k;i++)
{
if(b[i]<0)
count++;
}
if(count>=2)
return true;
else
return false;
}

void print(int *b,int k)
{
int i;
for(i=0;i<k;i++)
{
cout<<b[i]<<" ";
}
cout<<"\n";
}


void array_prb1(int *a,int n)
{
cout<<"all possible subarray who's sum=0& atleast two nagetive element;-\n\n";
int i,j,k=0,*b,index,ans=0,sum=0;
for(i=0;i<n;i++)
{
k=0;
sum=0;
for(j=i;j<n;j++)
{
b[k++]=a[j];
sum=sum+a[j];
if(sum==0&&istwongt(b,k))
{
print(b,k);
if(ans<k)
{
index=i;
}
ans=max(ans,k);
}
}
}
cout<<"longetst subarray:----\n\n";
for(i=index;k++<=ans;i++)
{
cout<<a[i]<<" ";
}
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
array_prb1(a,n);
}

    