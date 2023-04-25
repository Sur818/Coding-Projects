package sample;
import java.util.*;
 class NestedForloop21 
 {
  public static void main (String[] ar)
  {
    int i,j,n,k;
    System.out.println("enter no of row");
    Scanner m=new Scanner (System.in);
    n=m.nextInt();
    for(i=1;i<=n;i++)
    {
     for(j=1;j<=i;j++)
     {
       System.out.print("*");
     }
     if(i<n)
     {
     System.out.print("\n");
     }
    }
    for(i=1;i<=n;i++)
    {
      if(i>1)
      { 
      for(j=1;j<=(n-1)+i;j++)
      {
        System.out.print(" ");
      }
      }
      for(k=1;k<=(n+1)-i;k++)
      {
        System.out.print("*");
      }
      System.out.print("\n");
    }
   
  }
  
}
