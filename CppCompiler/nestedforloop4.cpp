#include<iostream>
using namespace std;

int main()
{
    int i,n,sum=0,fact=1,j,z,k,n1;
    cout<<"enter range";
    cin>>n;
     
    for(i=1;i<=n;i++)
    {
     z=i;
    for(j=1;z!=0;j++)
    {
       n1=z%10;
    for(k=1;k<=n1;k++)
    {
    fact=fact*k;
    }
    sum=sum+fact;
    fact=1;
    z=z/10;
    }
if(sum==i)
{
cout<<sum<<endl;
}
sum=0;
}

return 0;
}

    