#include<iostream>
using namespace std;

int main()
{
int i,count=0;
  string s,s1;
cout<<"enter name:-";
getline(cin,s);
reverse(s.begin(),s.end());
for(i=0;i<s.length();i++)
{
count++;
if(s[i]==' ')
{
s1=s.substr(0,count);
reverse(s1.begin(),s1.end());
break;
}
}
cout<<"sir name ="<<s1<<endl;
return 0;
}