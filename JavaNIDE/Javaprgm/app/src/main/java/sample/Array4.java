package sample;
import java.util.*;
 class Array4
 {
  public static void main (String[] ar)
  {
    int i,n;
    System.out.print("enter array");
    Scanner m=new Scanner(System.in);
    n=m.nextInt();
    int []arr1=new int[n];
    int []arr2=new int[n];
    for(i=0;i<n;i++)
    {
      System.out.println("arr1["+i+"]"+"=");
      arr1[i]=m.nextInt();
      
    }
    for(i=0;i<n;i++)
    {
      arr2[i]=arr1[i];
 
    }
    for(i=0;i<n;i++)
    {
      System.out.println(arr2[i]);
    }
     
    
  }
}
