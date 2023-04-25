#include<iostream>
#include<string>
using namespace std;
void show (int arr[],int n);

int main()
{
 int i,n,m,j,k=-1,p,sapreater;
cout<<"enter size:";
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
string s;
cout<<"enter elements want to delete:-";
cin>>s;
while (s[k++]!='\0')
{
for(i=0;i<n;i++)
{
 sapreater=0;
char ch=s[k];
if(arr[i]==(int)(ch))
{
sapreater=1;
for(j=i;j<n-1;j++)
{
arr[j]=arr[j+1];
}
i--;
n--;
}
}

if(sapreater==1)
{
show(arr,n);
}
}
return 0;
}



void show(int arr[],int n)
{
int i;
for(i=0;i<n;i++)
{
cout<<arr[i]<<endl;
}
}
    