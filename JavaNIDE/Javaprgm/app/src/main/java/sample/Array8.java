package sample;
import java.util.*;
 class Array8
{
  
 static boolean isPrime(int n)
  {
    int i,f=0;
    for(i=2;i<=n/2;i++)
    {
      if(n%i==0)
      {
       f=1;
       break;
      }
    }
    if(f==0)
    {
      return true;
    }
    else
    {
      return false;
    }
    
  }
 public static void main(String[] ar)
 {
  int i,j,n,t;
  System.out.println("enter size of array");
  Scanner m=new Scanner (System.in);
  n=m.nextInt();
   int a[]=new int[n];
   for(i=0;i<n;i++) 
   {
     System.out.println("a["+i+"]=");
     a[i]=m.nextInt();
   }
   for(i=0;i<n;i++)
   {
     j=0;
   while (j!=i&&j<n)
   {
     
      t=a[i]+a[j];
        if(isPrime(t)==true)
          {
           System.out.println(a[i]+"&"+a[j]);
          }
          j++;
  }
   }
   
   
 }
  
}
