package sample;
import java.util.*;
 class NestedForloop27
 {
   public static void main (String[] ar)
   {
     int i,j,n,k;
     System.out.println("enter odd no of row");
     Scanner m=new Scanner(System.in);
     n=m.nextInt();
     n=n/2+1;
     for(i=1;i<=n;i++)
     {
      for(j=1;j<=i;j++)
      {
       System.out.print(" ");
      }
      for(k=i;k<=n;k++)
      {
        System.out.print(k);
      }
      for(k=n-1;k>=i;k--)
      {
        System.out.print(k);
      }
      System.out.print("\n");
     }
     for(i=n-1;i>=1;i--)
     {
       for(j=1;j<=i;j++)
       {
         System.out.print(" ");
       }
       for(j=i;j<=n;j++)
       {
         System.out.print(j);
       }
       for(j=n-1;j>=i;j--)
       {
         System.out.print(j);
       }
       System.out.print("\n");
     }
     
   }
  
}

