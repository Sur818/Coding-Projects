#include<iostream>
using namespace std;
int factorial(int n)
{
int i=1,fact=1;
while(i<=n)
{
fact=fact*i;
i++;
}
return fact;
}

int main()
{
 int n,i=1,j,z,sum;
cout<<"enter range:-";
cin>>n;
while(i++<=n)
{
z=i;
j=i;
sum=0;
while(j!=0)
{
sum=sum+factorial(j%10);
j=j/10;
}
if(sum==z)
{
cout<<i<<endl;
}
};
return 0;
}

