package sample;
import java.util.*;
 class NestedForloop12
 {
   public static void main (String[] ar)
   {
     int i,j,n,k;
     System.out.println("enter no of row");
     Scanner m=new Scanner (System.in);
     n=m.nextInt();
     for(i=1;i<=n;i++)
     {
      for(j=1;j<=n-i;j++)
      {
        System.out.print(" ");
      }
      for(k=1;k<=i;k++)
      {
        System.out.print("* ");
      }
      
      System.out.print("\n");
     }
    
   }
  
}
