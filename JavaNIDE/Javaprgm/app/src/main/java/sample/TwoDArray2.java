package sample;
import java.util.*;
class TwoDArray2 
{
 boolean isPrime(int n)
  {
    int i,f=0;
    for(i=2;i<=n/2;i++)
    {
     if(n%i==0)
     {
       f=0;
       return false;
   }
   
    } 
   return true;
      
  
  }
 public static void main (String[] ar)
 {
     int i,j,max,min,n;
     TwoDArray2 obj=new TwoDArray2();
  System.out.print("enter size if squre matrix");
  Scanner m=new Scanner (System.in);
  n=m.nextInt();
  int [][]a=new int [n][n];
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      System.out.print("a["+i+"]["+j+"]=");
      a[i][j]=m.nextInt();
    }
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(obj.isPrime(a[i][j]))
      {
    System.out.println(a[i][j]);
          
      }
      }
      }
     
      
    }
  }
   
