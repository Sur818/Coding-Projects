package sample;
import java.util.*;
 class NestedForloop25
 {
   public static void main (String[] ar)
   {
     int i,j,n,k;
     System.out.println("enter no of row");
     Scanner m=new Scanner(System.in);
     n=m.nextInt();
     for(i=n;i>=1;i--)
     {
      for(j=1;j<=n-i;j++)
      {
       System.out.print(" ");
      }
      for(k=i;k>=1;k--)
      {
        System.out.print(k);
      }
      for(k=2;k<=i;k++)
      {
        System.out.print(k);
      }
      System.out.print("\n");
     }
     for(i=2;i<=n;i++)
     {
       for(j=1;j<=n-i;j++)
       {
         System.out.print(" ");
       }
       for(j=i;j>=1;j--)
       {
         System.out.print(j);
       }
       for(j=2;j<=i;j++)
       {
         System.out.print(j);
       }
       System.out.print("\n");
     }
     
   }
  
}
