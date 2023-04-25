package sample;
import java.util.*;
public class Nestedforloop6
 {
  public static void main (String[] ar)
  {
   int i,j,n;
   System.out.println("enter no of row");
   Scanner m=new Scanner (System.in);
   n=m.nextInt();
   for(i=1;i<=n;i++)
   {
    for(j=1;j<=i;j++)
    {
     System.out.print(j);
    }
    System.out.print("\n");
   } 
    
  }
}
