package sample;
import java.util.*;

class Array6e 
{
static void ap(int arr[] ,int n)
{
  int i,j,temp,d,count=0;
  for(i=0;i<n;i++)
  {
   for(j=0;j<n-1;j++)
   {
    if(arr[j]>arr[j+1])
    {
     temp=arr[j];
     arr[j]=arr[j+1];
     arr[j+1]=temp;
    }
   }
  }
  
  Scanner m=new Scanner(System.in);
  System.out.println("Enter common diffrence");
  d=m.nextInt();
 for(i=0;i<n;i++)
{
  
 if(arr[i+1]-arr[i]==d)
 {
   count++;
 }
 
 if(count==n-1)
 {
  System.out.println("yes");
 }
 }
 }
  
public static void main(String[] ar)
{
  int n,i;
 Scanner m=new Scanner(System.in);
 System.out.println("enter the size");
 n=m.nextInt();
 int arr[]=new int[n];
 for(i=0;i<n;i++)
 {
  System.out.println("arr"+"["+i+"]");
  arr[i]=m.nextInt();
 }
 
 ap(arr,n);
 }
 
}
