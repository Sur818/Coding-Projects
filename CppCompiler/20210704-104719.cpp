#include<iostream>
using namespace std;
int **array_merge(int a[10][100],int *b,int n,int m,int w)
{
int i,j,**c,k,t;
c=new int*[n];
for(i=0;i<n;i++)
{
c[i]=new int[100];
}
k=-1,t=0;
for(i=0;i<n;i++)
{
k++;
t=0;
for(j=0;j<w*m;j++)
{
if(j<(w-1)*m)
c[i][j]=a[i][j];
else
c[i][j]=*(b+k*m+(t++));
}
}

return c;
}

int main()
{
 int i,j,n,m,count=1,pos;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
cout<<"entered first array:-\n";
int a[10][100];
int b[n][m];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>a[i][j];
}
}
cout<<"how many matrix want to be concat:-\n";
cin>>pos;
while(count++<=pos)
{
cout<<"entered element in next array:-\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cout<<"b["<<i<<"]["<<j<<"]=";
cin>>b[i][j];
}
}

cout<<"after concatenation:-\n";
int **p=array_merge(a,(int *)b,n,m,count);
for(i=0;i<n;i++)
{
for(j=0;j<count*m;j++)
{
cout<<p[i][j]<<" ";
a[i][j]=p[i][j];
}
cout<<"\n";
}
}
}






//////-------+>
/*void print(int *a,int n,int m)
{
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<3*m;j++)
{
if(j<2*m)
{
cout<<*(a+i*(3*m)+j)<<" ";
}
}
cout<<"\n";
}
}


int main()
{
int i,j,m,n;
cout<<"enter row:-";
cin>>n;
cout<<"enter collom:-";
cin>>m;
int a[n][3*m];
for(i=0;i<n;i++)
{
for(j=0;j<3*m;j++)
{
cin>>a[i][j];
}
}
print((int *)a,n,m);
}*/
    