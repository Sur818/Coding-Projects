#include<iostream>
using namespace std;

int main()
{
  string s1,s2;
cout<<"enter string:-";
getline(cin,s1);
cout<<"enter string:-";
getline(cin,s2);
swap(s1,s2);
cout<<"\nafter swaping both string:--\n\n";
cout<<s1<<endl;
cout<<s2<<endl;

}