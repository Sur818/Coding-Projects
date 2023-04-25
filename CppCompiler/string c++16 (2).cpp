#include<iostream>
using namespace std;

int main()
{
    string s,s1,s2,s3;
    int i,n,k=0,count=0,m,p,check=0;
    cout<<"program to swap the word:-\n\n";
    cout<<"enter string:-";
    getline(cin,s);
    s=s+" ";
    cout<<"enter posn for swap the words:-";
    cin>>m>>n;
    p=s.length();
 for(i=0;i<p;i++)
{
  count++;
if(s[i]==' ')
{
check++;
s1=s.substr(k,count-1);
if(check==n)
{
s2=s1;
}
if(check==m)
{
s3=s1;
}
k=i+1;
count=0; 
}
}

check=0;
k=0;
for(i=0;i<p;i++)
{
count++;
if(s[i]==' ')
{
check++;
s1=s.substr(k,count-1);
if(check==n)
{
s1=s3;
}
if(check==m)
{
s1=s2;
}
cout<<s1<<" ";
k=i+1;
count=0;
}
}
return 0;
}





 

    
  
    