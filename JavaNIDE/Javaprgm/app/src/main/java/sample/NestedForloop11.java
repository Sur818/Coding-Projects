package sample;
import java.util.*;
public class NestedForloop11
 {
   public static void main (String[] ar)
   {
     int i,j,n;
     System.out.println("enter no of row");
     Scanner m=new Scanner (System.in);
     n=m.nextInt();
     for(i=n;i>=1;i--)
     {
      for(j=1;j<=i;j++)
      {
       System.out.print(j);
      }
      System.out.print("\n");
     }
     
   }
  
}
