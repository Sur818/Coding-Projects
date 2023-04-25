#include<iostream>
using namespace std;
void show (int *,int n);
int main()
{
 int i,j,n,temp;
cout<<"enter size:-";
cin>>n;
int a[n][n];
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>a[i][j];
}
}
cout<<"entered element are:---\n\n";
show(&a[0][0],n);

for(i=0;i<n;i++)
{
for(j=0;j<i;j++)
{
temp=a[j][i];
a[j][i]=a[i][j];
a[i][j]=temp;
}
}
cout<<"after upgradation:--->\n\n";
show(&a[0][0],n);
}



void show(int *p,int n)
{
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<*((p+i*n)+j)<<"  ";
}
cout<<"\n";
}
}



