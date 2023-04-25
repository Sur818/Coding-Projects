package sample;
import java.util.*;
public class Nestedforloo3
 {
  
  public static void main (String[] ar)
  {
   int i,j,n,k;
   System.out.println("enter no of row");
   Scanner m=new Scanner(System.in);
   n=m.nextInt();
   for(i=1;i<=n;i++)
   {
    for(j=n;j>=i;j--)
    {
      System.out.print(" ");
    }
    for(k=1;k<=i;k++)
    {
     System.out.print("*");
    }
   
  System.out.print("\n");
   
  }
  }
  
}
