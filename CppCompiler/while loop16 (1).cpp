#include<iostream>
using namespace std;

int main()
{
 int i,j,k,n,prod=1,flag;
cout<<"enter how many no to gets LCM:-";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
cout<<"LCM of given no:-\n\n";
for(i=0;i<n;i++)
{
cout<<a[i];
if(a[i]>=10)
cout<<"|";
else
cout<<" |";
}
cout<<endl;
for(i=0;i<n;i++)
{
cout<<"___";
}
cout<<endl;
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
{
for(k=0;k<n;k++)
{
cout<<a[k];
if(a[k]>=10)
cout<<"|";
else
cout<<" |";
}
cout<<endl;
prod=prod*i;
}
else
i++;
};
cout<<"LCM="<<prod<<endl;
return 0;
}

    