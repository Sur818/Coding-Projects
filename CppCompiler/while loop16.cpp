#include<iostream>
using namespace std;

int main()
{
 int i,j,n,prod=1,flag=0;
cout<<"enter how many no to gets LCM:-";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
i=2;
while(i<=*max_element(a,a+n))
{
flag=0;
for(j=0;j<n;j++)
{
if(a[j]%i==0)
{
flag++;
a[j]=a[j]/i;
}
}
if(flag!=0)
prod=prod*i;
else
i++;
cout<<endl;
};
cout<<"LCM="<<prod<<endl;
return 0;
}

    