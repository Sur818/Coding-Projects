#include<iostream>
using namespace std;


int main()
{
    int n=15, k=1;
    float sum=0;
    for(int i=1; i<=n ; i++){
  
        int fact=0;
        for(int j=1; j<=n; j++)
        {
            if(i%j==0)
                fact++;
        }
       if(fact==2){
         cout << k<< "/" << i;
         if(i!=n)
             cout << "+";
         sum += (float)k/i;
        k++;    
       }  
    }
    cout<<"\n\nSum: " << sum;
    return 0;
}