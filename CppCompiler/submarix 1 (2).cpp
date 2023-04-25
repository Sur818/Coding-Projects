#include<iostream>
using namespace std;
int submatrix(int a[4][3],int n,int m,int k)
{
int i,j,k1=0,k2=0,sum=0;;
for(i=n;k1++<k;i++)
{
k2=0;
cout<<"[";
for(j=m;k2++<k;j++)
{
cout<<a[i][j]<<" ";
sum=sum+a[i][j];
}
cout<<"]";
cout<<"\n";
}
cout<<"\n\n";
return sum;

}


int main()
{
 int i,j,k,sum,ans=0,index1,index2;
int a[4][3];
for(i=0;i<4;i++)
{
for(j=0;j<3;j++)
{
cout<<"a["<<i<<"]["<<j<<"]=";
cin>>*(*(a+i)+j);
}
}
cout<<"enterd matrix are:----\n";
for(i=0;i<4;i++)
{
cout<<"[";
for(j=0;j<3;j++)
{
cout<<a[i][j]<<" ";
}
cout<<"]";
cout<<"\n";
}

cout<<"\n";
cout<<"enter sub square matrix order:-\n";
cin>>k;
cout<<"all possible submarix of given order:-\n";
if(k>=4)
{
cout<<"invalid operation:-\n";
}
else
{
for(i=0;i<4-k+1;i++)
{
for(j=0;j<3-k+1;j++)
{
sum=submatrix(a,i,j,k);
if(ans<sum)
{
index1=i;
index2=j;
}
ans=max(ans,sum);
}
}
cout<<"\n sub matrix whoose sum max:-\n";
submatrix(a,index1,index2,k);
}
return 0;
}

    