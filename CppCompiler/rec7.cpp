#include<iostream>
using namespace std;

int no(int n)
{
 int sum=0,n1;
if(n==0)
return sum;
n1=n%10;
sum=sum+n1*n1*n1;
return sum+no(n/10);
}





int main ()
{
int n,arms;
cout<<"enter range";
cin>>n;
for(int i=1;i<=n;i++)
{
arms=no(i);
if(arms==i)
{
cout<<i<<endl;
}

}
}
