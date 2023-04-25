#include<iostream>
using namespace std;
 
bool isMember(int a, int d, int x)
{

    if (d == 0)

        return (x == a);

    return ((x - a) % d == 0 && (x - a) / d >= 0);
}
 

int main()
{

    int a = 1, x = 7, d = 3;

    if (isMember(a, d, x))

        cout << "Yes";

    else

        cout << "No";

    return 0;
    }
    