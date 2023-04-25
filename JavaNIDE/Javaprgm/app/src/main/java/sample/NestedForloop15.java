package sample;
import java.util.*;
 class NestedForloop15
 {
 public static void main (String[] ar)
 {
  int i,j,n,k,t;
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
     System.out.print(k);
     }
     for(t=i-1;t>=1;t--)
     {
      System.out.print(t);
     }
   System.out.print("\n");
  }
 }
}
