package sample;
import java.util.*;
class Array3 
{
  
  public static void main (String[] ar)
  {
    int i,j,n,sum1=0,sum2=0;
    System.out.println("enter size of array");
    Scanner m=new Scanner(System.in);
    n=m.nextInt();
    int []arr=new int[n];
    for(i=0;i<n;i++)
    {
     System.out.print("a["+i+"]"+"=");
     arr[i]=m.nextInt();
    }
    for(i=0;i<n;i++)
    {
      if(i%2!=0)
      {
        sum1=sum1+arr[i];
      
     }
     else
{
  sum2=sum2+arr[i];
}
    }
    System.out.println("sum of odd element of array="+sum1);
    System.out.println("sum of even ele of arr="+sum2);
   
    
  }
  
  
}
