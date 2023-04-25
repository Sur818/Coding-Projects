#include<iostream>
using namespace std;
void print(int a[10][10],int n,int m)
{
int i,j,k1=0,k2=0;
for(i=n;k1++<3;i++)
{
k2=0;
for(j=m;k2++<3;j++)
{
if(!(i==n+1&&j==m||i==n+1&&j==m+2))
cout<<a[i][j]<<" ";
else
cout<<"  ";
}
cout<<"\n";
}
cout<<"\n\n";
}

bool check_bound(int p,int q,int n,int m)
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
if(count1>=3&&count2>=3)
return true;
else
return false;
}


int main()
{
 int i,j,n,m;
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

cout<<"all possible hourglasses:-\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(check_bound(i,j,n,m))
{
print(a,i,j);
}
}
}
return 0;
}

