#include<iostream>
using namespace std;
void print(int *a,int n,int m)
{
int i,j;
for(i=0;i<n;i++)
{
cout<<"[";
for(j=0;j<m;j++)
{
cout<<*(a+i*m+j);
if(*(a+i*m+j)<10)
{
cout<<"  ";
}
else
{
cout<<" ";
}
}
cout<<"]";
cout<<"\n";
}
}


int main()
{
int i,j,n,m,count=0,sum,p;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int a[n][m];
int b[n][m];
cout<<"enter element in first matrix:-\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>a[i][j];
}
}
cout<<"how many matrix want to add\n";
cin>>p;
while (count++<p)
{
cout<<"enter element in matrix:-\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"b["<<i<<"]["<<j<<"]=";
cin>>b[i][j];
}
}

for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
sum=a[i][j]+b[i][j];
a[i][j]=sum;
}
}
print((int *)a,n,m);
}
}





    