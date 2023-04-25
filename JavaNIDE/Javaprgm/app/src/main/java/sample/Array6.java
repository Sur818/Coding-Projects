package sample;
import java.util.*;
class Array6
 {
  public static void main (String[] ar)
  {
    int i,n,f=0,b,j;
    System.out.print("enter size of array");
    Scanner m=new Scanner (System.in);
    n=m.nextInt();
    int []arr=new int[n];
    
    for(i=0;i<n;i++)
    {
      System.out.println("arr1["+i+"]"+"=");
      arr[i]=m.nextInt();
    }
    for(i=0;i<n;i++)
    {
     b=arr[i];
     f=0;
     for(j=2;j<=b/2;j++)
     {
       if(b%j==0)
       {
         f=1;
         break;
       }
       
     }
     if(f==0)
     {
       System.out.println(b);
       
       
     }
    }
    
    
  }
  
}
