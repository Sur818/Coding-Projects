#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,sum=0,i;
    cout<<"Enter the range of number:";
    cin>>n;

    for(i=1;i<=n;i++)
    {
  
        if(i%2==0)
         {
        cout<<pow(i,2);
        if(i<n)
        {
         cout<<"-";
        }
            sum-=pow(i,2);
            }
       else
          {
        cout<<pow(i,2);
         if(i<n)
        {
        cout<<"+";
        }
            sum+=pow(i,2);
            }
    
}
    cout<<"The sum of the series ="<<sum;
}