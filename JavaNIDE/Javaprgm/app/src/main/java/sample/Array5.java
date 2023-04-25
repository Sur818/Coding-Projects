package sample;
import java.util.*;
class Array5
 {
  public static void main (String[] ar)
  {
    int i,n,b,count=0;
    System.out.println("enter size of array");
    Scanner m=new Scanner (System.in);
    n=m.nextInt();
    int []a=new int[n];
    for(i=0;i<n;i++)
    {
      System.out.print("a["+i+"]"+"=");
      a[i]=m.nextInt();
      
    }
    System.out.print("enter element to check freq");
    b=m.nextInt();
    for(i=0;i<n;i++)
    {
      if(a[i]==b)
      {
        count++;
      }
    }
    System.out.print("freq="+count);
    
    
  }
  
  
}
