#include<iostream>
using namespace std;

int main()
{
    string s,s1,s2;
    cout<<"enter string:-";
    getline(cin,s);
    s=s+" ";
    int i,n,k=0,count=0;
    cout<<"which word wants to delete:-";
    cin>>s1;
     n=s.length();
    count=0;
    for(i=0;i<n;i++)
    {
    count++;
    if(s[i]==' ')
    {
    s2=s.substr(k,count-1);
    if(s2.compare(s1)!=0)
    {
    cout<<s2<<" ";
    }
    k=i+1;
    count=0;
    }
    }
    return 0;
    }
    
    
    