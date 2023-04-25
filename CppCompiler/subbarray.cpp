#include<iostream>
using namespace std;
int max_lengthsubar(int a[],int n)
{
int i,j,gcd=0,maxlen=0;
for(i=0;i<n;i++)
{
gcd=0;
for(j=i;j<n;j++)
{
gcd=__gcd(gcd,a[j]);
if(gcd>1)
{
maxlen=max(maxlen,j-i+1);
}
}
}
return maxlen;
}



int main()
{
cout<<"thisp program help to find length of max subArray whose GCD is max:-\n\n";
  int n,i,len;
cout<<"enter size of array:-";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
len=max_lengthsubar(a,n);
cout<<len;
return 0;
}
