#include<iostream>
using namespace std;

int *oddno(int *arr,int n)
{
 int i,k=0; 
int *arr2;
for(i=0;i<n;i++)
{
if(arr[i]%2==0)
{
arr2[k++]=arr[i];
}
}
return arr2;
}



int main()
{
int i,n;
cout<<"enter size:-";
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{
cout<<"arr["<<i<<"]=";
cin>>arr[i];
}
int *p=oddno(arr,n);
for(i=0;*(p+i+1)!='\0';i++)
{
cout<<*(p+i)<<" ";
}
return 0;
}
