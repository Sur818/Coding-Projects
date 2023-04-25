#include<iostream>
using namespace std;

int main()
{
    char s[4]={'2','3','-','1'};
    sort(s,s+4);
    for(int i=0;i<4;i++)
    {
    cout<<s[i]<<endl;
    }
    }