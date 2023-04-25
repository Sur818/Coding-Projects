#include<iostream>
using namespace std;

int main()
{
    string s,s1,s2;
    int i,k=0,count=0;
    cout<<"enter string:-";
    getline(cin,s);
    s=s+" ";
    for(i=0;i<s.length();i++)
    {
    count++;
    if(s.at(i)==' ')
    {
    s1=s.substr(k,count);
    reverse(s1.begin(),s1.end());
    cout<<s1;
   k=i+1;
count=0;
}
}
}