package sample;
import java.util.*;
public class NestedForloop30 
{
  public static void main (String[] ar)
  {
   
   int i,j,n;
   System.out.println("enter no of row");
   Scanner m=new Scanner(System.in);
   n=m.nextInt();
  if(n%2!=0)
  {
    
   for(i=1;i<=n/2+1;i++)
   {
     for(j=1;j<=i;j++)
     {
       System.out.print("*");
     }
     System.out.print("\n");
   }
   for(i=(n/2+1)-1;i>=1;i--)
   {
     for(j=1;j<=i;j++)
     {
       System.out.printf("*");
     }
     System.out.print("\n");
   }
  
  }
  else
{
  
   for(i=1;i<=n/2;i++)
   {
     for(j=1;j<=i;j++)
     {
       System.out.print("*");
     }
     System.out.print("\n");
   }
   for(i=n/2;i>=1;i--)
   {
     for(j=1;j<=i;j++)
     {
       System.out.printf("*");
     }
     System.out.print("\n");

}
  }
  }
}
