#include<iostream>
using namespace std;
void missing_no(int [],int,int);
int mejority(int [],int);
int main()
{
cout<<"\n this program help you to find missing no in general seriese:----\n\n\n";
   int i,j,n,k=0;
cout<<"enter size:-";
cin>>n;
int a[n];
int b[n-1];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
sort(a,a+n);
for(i=0;i<n;i++)
{
b[k++]=a[i]-a[i-1];
}
 int temp=mejority(b,k);
cout<<"missing no:-";
missing_no(a,n,temp);
return 0;
}

int mejority(int b[],int n)
{
sort(b,b+n);
int i,curr_count,max_count=1,res;
for(i=0;i<n-1;i++)
{
if(b[i]-b[i-1]==0)
{
curr_count++;
if(curr_count>max_count)
{
max_count=curr_count;
res=b[i];
}
}
curr_count=1;
}
return res;
}





void  missing_no(int a[],int n,int k)
{
int i,check=0;
for(i=0;i<n-1;i++) 
{
if(a[i+1]!=a[i]+k)
{
check++;
cout<<a[i+1]-k<<"\n";
}
}
if(check==0)
cout<<"no any missing no:-";
}
    