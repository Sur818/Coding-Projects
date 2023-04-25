#include<iostream>
using namespace std;

int main()
{
    string s,s1;
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
   cout<<s1<<endl;
k=i+1;
count=0;
}
}
}