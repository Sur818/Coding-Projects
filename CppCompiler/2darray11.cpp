#include<iostream>
using namespace std;

int main()
{


cout<<"convert n×m matrix in to p×q such  that";
cout<<" p*q==n*m-----------------------\n\n";
  int i,j,n,m,p,q,l=0,k=0;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int a[n][m];
cout<<"in which row and collom want to convert:-\n";
cout<<"enter row:-";
cin>>p;
cout<<"enter collom:-";
cin>>q; 
if(p*q==n*m)
{
int b[p][q];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>a[i][j];
}
}

cout<<"\n"<<"input matrix are:---\n";
for(i=0;i<n;i++)
{
cout<<"[";
for(j=0;j<m;j++)
{
cout<<a[i][j];
if(a[i][j]<10)
{
cout<<"   ";
}
else
{
cout<<"  ";
}
}
cout<<"]";
cout<<"\n";
}


//p>q 34---->62
/*34-->26
//p<q*/
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(k>q-1)
{
l++;
k=0;
}
b[l][k++]=a[i][j];
}
}

cout<<"\n\nafter conversion:------\n\n";
for(i=0;i<p;i++)
{
cout<<"[";
for(j=0;j<q;j++)
{
cout<<b[i][j];
if(b[i][j]<10)
{
cout<<"   ";
}
else
{
cout<<"  ";
}
}
cout<<"]";
cout<<"\n";
}
}
else
{
cout<<"this conversation is not possible because";
cout<<" no of element should be same in both matrix---------";
cout<<"--------------------->";
} 

return 0;
}
