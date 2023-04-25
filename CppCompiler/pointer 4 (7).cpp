#include<iostream>
using namespace std;
void rem_duplicate(char*a,int n)
{
int i,j,k;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
for(k=j;k<n;k++)
{
a[k]=a[k+1];
}
n--;
i--;
}
}
}
puts(a);
}
int main()
{
   int i,n;
char arr[100];
cout<<"enter string:-";
gets(arr); 
n=strlen(arr);
rem_duplicate(arr,n);
return 0;
}