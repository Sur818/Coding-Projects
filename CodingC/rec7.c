#include<stdio.h>

int print(int arr[10],int i)
{
if(i<5)
 {
printf("%d\n",arr[i]);
 print(arr,i+1);
}
}
int main ()
{
int i=0;
int arr[10]={1,2,3,4,5};
 print(arr,0);
}
 