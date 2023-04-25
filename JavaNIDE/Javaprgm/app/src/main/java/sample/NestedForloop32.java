package sample;
import java.util.*;
 class NestedForloop32
 {
   public static void main(String[] ar)
   {
   int i,j,k,n;
   System.out.println("enter no of row");
   Scanner m=new Scanner (System.in);
   n=m.nextInt();
   if(n%2!=0)
   {
   for(i=n/2+1;i>=1;i--)
   { 
    for(j=1;j<=i;j++)
    {
      System.out.print("*");
    }
    for(k=1;k<=(n/2+1)-i;k++)
    {
      System.out.print("  ");
    }
    for(j=1;j<=i;j++)
    {
      System.out.print("*");
    }
    System.out.print("\n");
   }
   for(i=2;i<=n/2+1;i++)
   {
     for(j=1;j<=i;j++)
     {
       System.out.print("*");
     }
     for(k=i+1;k<=n/2+1;k++)
     {
       System.out.print("  ");
     }
     for(j=1;j<=i;j++)
     {
       System.out.print("*");
     } 
     System.out.print("\n");
   }
   }
   else
{
  
  for(i=n/2;i>=1;i--)
   { 
    for(j=1;j<=i;j++)
    {
      System.out.print("*");
    }
    for(k=1;k<=n/2-i;k++)
    {
      System.out.print("  ");
    }
    for(j=1;j<=i;j++)
    {
      System.out.print("*");
    }
    System.out.print("\n");
   }
   for(i=1;i<=n/2;i++)
   {
     for(j=1;j<=i;j++)
     {
       System.out.print("*");
     }
     for(k=i+1;k<=n/2;k++)
     {
       System.out.print("  ");
     }
     for(j=1;j<=i;j++)
     {
       System.out.print("*");
     } 
     System.out.print("\n");
   }
  
 }
     }
  
}
