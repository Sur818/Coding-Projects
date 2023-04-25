#include<iostream>
#include<math.h>
using namespace std;

int main()
{
 int n1,i=1,sum=0,j,n,z,k;
cout<<"enter range:-";
cin>>n;
while (i++<=n)
{
z=i;
sum=0;
j=i;
k=0;
while(j!=0)
{
k++;
n1=j%10;
sum=sum+pow(j,k);
j=j/10;
};
if(z==sum)
{
cout<<i<<endl;
}
};
return 0;
}
