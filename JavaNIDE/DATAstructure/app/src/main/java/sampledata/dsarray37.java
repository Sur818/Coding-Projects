package sampledata;
import java.util.*;
 class dsarray37 
{
  public static void leftRotate array (int arr[],int n,int d)
  {
    d=d%n;
    int i,j,k;
    int gc=gcd(d,n);
    for(i=0;i<gc;i++)
    {
      temp=arr[i];
      j=i;
      while (true)
      {
       k=j+d;
       if(k>=n)
       {
         k=k-n;
       }
       if(k==i)
       {
         break;
       }
       arr[j]=arr[k];
       j=k;
      }
      arr[j]=temp;
    }
    
    
  }
  public static void int gcd(int a,int b)
  {
    if(b==0)
    {
      return a:
    }
    else
{
  return gcd(b,a%b);
}
  }

public static void main(string ar[])
{
  int arr[]={1,2,3,4,5,6,7,8,9,10,11,12}
  int d=3
  int n=arr.length();
  leftRotatearray(arr,n,d);
}
}
