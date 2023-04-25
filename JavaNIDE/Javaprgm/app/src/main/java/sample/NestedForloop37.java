package sample;
import java.util.*;
class NestedForloop37
 {
   public static void main (String[] ar)
   {
     int i,j,k,n;
     System.out.println("enter no of row");
     Scanner m=new Scanner (System.in);
     n=m.nextInt();
     for(i=n;i>=1;i--)
   {
      for(j=1;j<=i;j++)
      {
        if(j<=9)
        {
          
        System.out.print(j+" ");
        }
        else
{
 System.out.print(j); 
}
      }
      for(j=1;j<=n-i;j++)
      {
      System.out.print("    ");
      }
      for(k=i;k>=1;k--)
      {
        if(k<=9)
        {
      System.out.print(k+" ");
      }
      else
{
  System.out.print(k);
}
      }
      System.out.print("\n");
     }
     for(i=2;i<=n;i++)
     {
       for(j=1;j<=i;j++)
       {
         if(j<=9)
         {
           System.out.print(j+" ");
         }
         else
{
    System.out.print(j);
             }
       }
       for(k=1;k<=n-i;k++)
       {
         System.out.print("    ");
       }
       for(j=i;j>=1;j--)
       {
        if(j<=9)
         {
           System.out.print(j+" ");
         }
         else
{
    System.out.print(j);
             }
       }
       System.out.print("\n");
     }
     } 
}
