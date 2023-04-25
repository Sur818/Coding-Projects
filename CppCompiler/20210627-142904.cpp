#include<iostream>
using namespace std;
void submatrix(int a[6][6],int n,int m,int k)
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

int sum_subm(int a[6][6],int n,int m,int k)
{
int i,j,k1=0,k2=0,sum=0;
for(i=n;k1++<k;i++)
{
k2=0;
for(j=m;k2++<k;j++)
{
sum=sum+a[i][j];
}
}
return sum;
}




int main()
{
cout<<"all possible submarix of given order:-\n";
 int i,j,k,sum,ans=0,index1,index2;
int a[6][6];
for(i=0;i<6;i++)
{
for(j=0;j<6;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>*(*(a+i)+j);
}
}

cout<<"enter sub square matrix order:-\n";
cin>>k;

if(k>=6)
{
cout<<"invalid operation:-\n";
}
else
{
for(i=0;i<6;i++)
{
cout<<"[";
for(j=0;j<6;j++)
{
cout<<a[i][j]<<" ";
}
cout<<"]";
cout<<"\n";
}
cout<<"\n sub matrix whoose sum max:-\n";
for(i=0;i<6-k+1;i++)
{
for(j=0;j<6-k+1;j++)
{
int sum=sum_subm(a,i,j,k);
if(ans<sum)
{
index1=i;
index2=j;
}
ans=max(ans,sum);
}
}
submatrix(a,index1,index2,k);
}
return 0;
}

    