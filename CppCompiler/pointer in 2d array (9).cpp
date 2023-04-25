#include<iostream>
using namespace std;
bool isprime(int z)
{
int x;
for(x=2;x<=z-1;x++)
{
if(z%x==0)
{
return false;
break;
}
}
if(x==z)
return true;
}


void update_2darray(int *arr,int k,int n,int m)
{
int i,j,b[n][m],t=0,temp=0;
for(i=0;i<k;i++)
{
if(isprime(arr[i]))
{
for(j=i;j<k;j++)
{
arr[j]=arr[j+1];
}
k--;
i--;
}
}

for(i=0;i<n;i++)
{
if(t<k)
{
cout<<"[";
}
for(j=0;j<m;j++)
{
if(t<k)
{
b[i][j]=arr[t++];
cout<<b[i][j]<<" ";
}
}
if(t<k)
{
cout<<"]";
cout<<"\n";
}
}
cout<<"]";
}





int main()
{
  int i,j,n,m,k=0;
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
cout<<"entered element are:-\n";
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
cout<<"after deleting prime no:-\n";
update_2darray(b,k,n,m);
}






    