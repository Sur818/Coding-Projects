#include<iostream>
using namespace std;
char *array_sort(char*a,int *n)
{
int i,j,temp;
for(i=0;i<*n;i++)
{
for(j=i+1;j<*n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
return a;
}


int main()
{
 char s[100];
cout<<"enter string:-";
gets(s);
int i,n;
n=strlen(s);
char *p=array_sort(s,&n);
for(i=0;*(p+i)!='\0';i++)
{
cout<<*(p+i)<<" ";
}
return 0;
}
