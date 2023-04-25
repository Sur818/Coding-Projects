#include<iostream>
using namespace std;

int main()
{
 int i,j,n,k,m,sum=0,sum1=0, per,p,s=6;
cout<<"enter no of Subject:-";
cin>>m;
cout<<"enter no of students:-";
cin>>n;
int arr[n][m+2];
for(i=0;i<n;i++)
{
cout<<"stu["<<i+1<<"]:-\n";
for(j=0;j<m;j++)
{
cout<<"sub["<<j+1<<"]=";
cin>>arr[i][j];
sum=sum+arr[i][j];
arr[i][j+1]=sum;
}
per=sum/m;
sum=0;
}

cout<<"       ";
for(i=0;i<m+1;i++)
{
if(i<m)
cout<<"sub["<<i+1<<"]"<<"  ";
else 
cout<<" sum"<<endl;
}

for(i=0;i<n;i++)
{
cout<<"stu["<<i+1<<"]="<<" ";
for(j=0;j<m+1;j++)
{
cout<<arr[i][j];
for(k=s;k>=1;k--)
{
cout<<" ";
}
}
cout<<"\n";

}
cout<<"which student information you want:-";
cin>>p;
for(j=0;j<m+1;j++)
{
if(j<m)
{
cout<<" marks of sub["<<j+1<<"]=";
cout<<arr[p-1][j]<<endl;
}
else
{
cout<<" sum of total marks=";
cout<<arr[p-1][j];
}
}
sum=arr[p-1][m];
per=sum/m;
cout<<"\npercentage="<<per<<"%";

return 0;
}





 