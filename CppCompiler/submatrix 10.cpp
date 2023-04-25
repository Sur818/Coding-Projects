#include<iostream>
using namespace std;
void print(int a[10][10],int n,int m,int p,int q)
{
int i,j,k1=0,k2=0;
for(i=n;k1++<p;i++)
{
k2=0;
cout<<"[";
for(j=m;k2++<q;j++)
{
cout<<a[i][j]<<" ";
}
cout<<"]";
cout<<"\n";
}
cout<<"\n";
}


bool check_bound(int p,int q,int k1,int k2,int n,int m)
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
if(count1>=k1&&count2>=k2)
return true;
else
return false;
}




int main()
{
 int i,j,n,m,k1,k2;
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
cout<<"enter order which order submatrix you want:-\n";
cin>>k1>>k2;
cout<<"all possible submarix:-\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(check_bound(i,j,k1,k2,n,m))
print(a,i,j,k1,k2);
}
}
return 0;
}
