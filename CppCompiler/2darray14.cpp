#include<iostream>
using namespace std;

int main()
{
 int i,j,n,m,k=0;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;

int a[n][m];
int b[n*m];
cout<<"\n\n enter element in array:-\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>a[i][j];
}
}



cout<<"\n\n entered element are:-\n\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<a[i][j]<<" ";
}
cout<<"\n";
}


for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
b[k++]=a[i][j];
}
}
sort(b,b+k);
 k=0;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
a[i][j]=b[k++];
}
}






cout<<"\n\n after changing digonal------>\n\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<a[i][j]<<" "; 
}
cout<<endl;
}
return 0;
}


