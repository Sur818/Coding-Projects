#include<iostream>
using namespace std;
void submarix(int a[3][4],int n,int m,int k)
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
cout<<"\n\n";
}





int main()
{
cout<<"all possible submarix of given order:-\n";
 int i,j,k;
int a[3][4];
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>*(*(a+i)+j);
}
}
cout<<"enter sub square matrix order:-\n";
cin>>k;
if(k>=4)
{
cout<<"invalid operation:-\n";
}
else
{
for(i=0;i<3;i++)
{
cout<<"[";
for(j=0;j<4;j++)
{
cout<<a[i][j]<<" ";
}
cout<<"]";
cout<<"\n";
}


for(i=0;i<3-k+1;i++)
{
for(j=0;j<4-k+1;j++)
{
submarix(a,i,j,k);
}
}
}
return 0;
}

    