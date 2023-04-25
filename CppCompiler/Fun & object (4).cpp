#include<iostream>
using namespace std;

class subjects
{
public:
string s1,s2;
int no;
void input_string(string s1,string s2)
{
this->s1=s1;
this->s2=s2;
}
};
 
void common_word(subjects s)
{
int i,j,count=0,k1=0,k2=0;
string s11,s12;
s.s1=s.s1+" ";
s.s2=s.s2+" ";
for(i=0;i<s.s1.length();i++)
{
count++;
if(s.s1[i]==' ')
{
s11=s.s1.substr(k1,count);
count=0;
k1=i+1;
for(j=0;j<s.s2.length();j++)
{
count++;
if(s.s2[j]==' ')
{
s12=s.s2.substr(k2,count);
count=0;
k2=j+1;
if(s11.compare(s12)==0)
{
s.no++;
cout<<s12<<endl;
}
}
}
}
}
cout<<"no of common word:-"<<s.no<<endl;
}

int main()
{
subjects s;
cin.ignore();
cout<<"enter first string:-";
getline(cin,s.s1);
cout<<"enter second string:-";
getline(cin,s.s2);
cout<<"common word between both string:-\n";
s.input_string(s.s1,s.s2);
common_word(s);
}


