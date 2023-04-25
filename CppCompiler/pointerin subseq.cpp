#include<iostream>
using namespace std;
void print(int *s,int j)
{
int i;
for(i=0;i<j;i++)
{
cout<<s[i];
}
cout<<"\n";
}


bool check_pelindrome(int *s,int j)
{
int i,flag=0;
for(i=0;i<=j/2;i++)
{
if(s[i]!=s[j-1-i])
{
flag++;
return false;
}
}
if(flag==0)
return true;
}




int array_subsequence(int *a,int n,int i,int *s,int j,int m)
{
if(i>=n)
{
if(check_pelindrome(s,j)&&j==m)
{
print(s,j);
}
return 0;
}
array_subsequence(a,n,i+1,s,j,m);
s[j]=a[i];
array_subsequence(a,n,i+1,s,j+1,m);
}






int main()
{
cout<<"this program help to find posible pelindrome subsequence of required length:---\n\n";
 int i,n,m;
 cout<<"enter size;-";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
int s[n];
cout<<"enter which length pelindrome you want to get---\n";
cin>>m;
array_subsequence(a,n,0,s,0,m);
}

    