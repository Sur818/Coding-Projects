#include<iostream>
using namespace std;

int main()
{
 int i,j,n,m,k=0,p,l=0;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int a[n][m];
int b[n*m];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>a[i][j];
b[k++]=a[i][j];
}
}

cout<<"\n\nentered element are:-\n\n";
for(i=0;i<n;i++)
{
cout<<"[";
for(j=0;j<m;j++)
{
cout<<a[i][j]<<" ";
}
cout<<"]";
cout<<"\n";

}


cout<<"enter element position want to delete-";
cin>>p;

for(i=p-1;i<k;i++)
{
b[i]=b[i+1];
}

for(i=0;i<n;i++)
{
cout<<"[";
for(j=0;j<m;j++)
{
if(l<k-1)
{
a[i][j]=b[l++];
cout<<a[i][j]<<" ";
}
}
cout<<"]"; 
cout<<endl;
}
}




    