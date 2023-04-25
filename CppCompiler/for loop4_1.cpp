#include<iostream>
using namespace std;
int nextcompst(int p)
{
int i=p+1,j,f=0;
while(i>p)
{
f=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
f++;
}
if(f>2)
{
return i;
}
i++;
}
}




int main()
{

     int n,i,j,k=1;
    double sum=0,sum1=0,fact=1,count=1;
    cout <<"enter range:-";
    cin>>n;
    for(i=1;i<=n;i++)
    {
    int compst=2;
    for(j=1;j<=i;j++)
    {
    cout<<compst<<"!";
    if(j<i)
    {
    cout<<"+";
    }
   for(k=1;k<=compst;k++)
   {
    fact=fact*k;
    }
    sum1=sum1+fact;
    fact=1;
    compst=nextcompst(compst);
  }
cout<<"/"<<i;
if(i<n)
{
cout<<"  +  ";
}
sum=sum+(double)sum1/i;
sum1=0;
}
cout<<"="<<sum;
return 0;
}