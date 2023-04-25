#include<iostream>
using namespace std;
void print(int a[10][10],int,int,int);
int check_sum(int a[10][10],int n,int m,int k)
{
int i,j,k1=0,k2=0,sum=0;
for(i=n;k1++<k;i++)
{
k2=0;
for(j=m;k2++<k;j++)
{
if(k1!=k/2+1)
sum=sum+a[i][j];
else
{
if(k2==k/2+1)
sum=sum+a[i][j];
}
}
}
return sum;
}



bool check_bound(int p,int q,int n,int m,int k)
{
int i,count1=0,count2=0;
for(i=p;i<n;i++)
{
count1++;
}
for(i=q;i<m;i++)
{
count2++;
}
if(count1>=k&&count2>=k)
return true;
else
return false;
}


int main()
{
 int i,j,n,m,k,ind1,ind2,ans=0,sum;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int a[10][10];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>a[i][j];
}
}

cout<<"enter order(it must me odd)-";
cin>>k;
cout<<" hourglasses whose sum are max:-\n";

for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(check_bound(i,j,n,m,k))
{
sum=check_sum(a,i,j,k);
if(ans<sum)
{
ans=max(ans,sum);
ind1=i;
ind2=j;
}
}
}
}
print(a,ind1,ind2,k);
return 0;
}


void print(int a[10][10],int ind1,int ind2,int k)
{
int i,j,k1=0,k2=0;
for(i=ind1;k1++<k;i++)
{
k2=0;
for(j=ind2;k2++<k;j++)
{
if(k1!=k/2+1)
cout<<a[i][j]<<" ";
else
{
if(k2==k/2+1)
cout<<a[i][j]<<" ";
else
cout<<"  ";
}
}
cout<<"\n";
}
}

