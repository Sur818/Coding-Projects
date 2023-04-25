package sample;
import java.util.*;
class NestedForloop10 
{
  public static void main (String[] ar)
  {
   
   int i,j,k,n;
   System.out.println("enter no ");
   Scanner m=new Scanner (System.in);
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
    
    System.out.print("\n");
   }
  }
  
  
}
