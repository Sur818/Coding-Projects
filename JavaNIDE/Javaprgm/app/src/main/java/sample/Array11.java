package sample;
import java.util.*;
class Array11 
{
 
 public static void main (String[] ar)
 {
   int i,n,j=0;
     System.out.println("enter size of array");
     Scanner m=new Scanner(System.in);
     n=m.nextInt();
     int []a=new int[n];
     int []b=new int[n];
     for(i=0;i<n;i++)
    {
      System.out.println("arr["+i+"]=");
      a[i]=m.nextInt();  
    }
    for(i=0;i<n;i++)
    {
      b[j++]=a[i];
    }
    for(i=0;i<n;i++)
    {
      System.out.println("b["+i+"]="+b[i]);
    }
    
   
   
   
 }
  
}
