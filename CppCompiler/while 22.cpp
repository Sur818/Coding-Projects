#include<iostream>
#include<math.h>
using namespace std;

bool isPerfectSquare(long double x)
{

    long double sr = sqrt(x);
    return((sr - floor(sr)) == 0);
}

void checkSunnyNumber(int N)
{
 if(isPerfectSquare(N + 1)) 
{
   cout << "Yes\n";

    }
    }
    
    int main()
    {
    int n;
    cout<<"enter no:-";
    cin>>n;
    checkSunnyNumber(n);
    }