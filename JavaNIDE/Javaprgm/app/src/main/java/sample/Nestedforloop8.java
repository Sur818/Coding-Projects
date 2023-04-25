
package sample;
import java.util.*;
 class Nestedforloop8 
{
 public static void main (String[] ar)
  {
    int i,j,n,k;
    System.out.println("enter no of row");
    Scanner m=new Scanner(System.in);
    n=m.nextInt();
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
      System.out.print("\n");
    }
    
    
    
  }
}

