#include<iostream>
using namespace std;

class common_letter
{
public:
string s1,s2;
int no;
void input(string s1,string s2)
{
this->s1=s1;
this->s2=s2;
}
};


char *remove_duplication(char arr[],int k)
{
int i,j,t;
for(i=0;i<k;i++)
{
for(j=i+1;j<k;j++)
{
if(arr[i]==arr[j])
{
for(t=j;t<k;t++)
{
arr[t]=arr[t+1];
}
k--;
i--;
}
}
}
arr[k]='\0';
return arr;
}

void display(common_letter obj)
{
int i,k=0,j;
char *b,common[obj.s1.length()];
for(i=0;i<obj.s1.length();i++)
{
for(j=0;j<obj.s2.length();j++)
{
if(obj.s1[i]==obj.s2[j]&&obj.s2[i]!=' ')
{
common[k++]=obj.s1[i];
}
}
}
b=new char[k];
b=remove_duplication(common,k);
for(i=0;b[i]!='\0';i++)
{
cout<<b[i]<<" ";
}
}





int main()
{
common_letter obj;
cout<<"enter first string:-";
getline(cin,obj.s1);
cout<<"enter second string :-";
getline(cin,obj.s2);
obj.input(obj.s1,obj.s2);
display(obj);
}





