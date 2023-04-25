#include<iostream>
using namespace std;
int seriese(int*n)
{
int i,fact=1,sum=0;
for(i=1;i<=*n;i++)
{
cout<<i<<"!"<<"/"<<i;
if(i<*n)
{
cout<<" + ";
}
fact=fact*i;
sum=sum+fact/i;
}
return sum;
}

int main()
{
int n;
cout<<"enter range:-";
cin>>n;
int m=seriese(&n);
cout<<"\nsum of seriese="<<m;
return 0;

}