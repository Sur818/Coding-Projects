#include<iostream>
using namespace std;
void print(int a[10][10],int n,int m,int k)
{
int i,j,k1=0,k2=0;
for(i=n;k1++<k;i++)
{
k2=0;
cout<<"[";
for(j=m;k2++<k;j++)
{
cout<<a[i][j]<<" ";
}
cout<<"]";
cout<<"\n";
}
cout<<"\n";
}


bool check_bound(int p,int q,int k,int n,int m)
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
 int i,j,n,m,k=1,t;
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

cout<<"all possible submarix:-\n";
for(t=1;t<=min(n,m);t++)
{
cout<<"all possible " <<k<<" order squre submatrix:-\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(check_bound(i,j,k,n,m))
print(a,i,j,k);
}
}
k++;
}
return 0;
}
