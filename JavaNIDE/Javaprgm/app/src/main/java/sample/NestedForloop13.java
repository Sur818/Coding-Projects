package sample;
import java.util.*;
class NestedForloop13
 {
  public static void main (String[] ar)
  {
    
    int i,j,k,n,m;
    System.out.println("enter no of row");
    Scanner z=new Scanner(System.in);
    n=z.nextInt();
    System.out.println("enter no of collom");
    m=z.nextInt();
    for(i=1;i<=n;i++)
    {
      k=1;
      for(j=1;j<=m;j++)
      {
        if(j>=6-i&&j<=4+i&&k==1)
        {
         System.out.print("*");
         k=0;
             }

else
{
  System.out.print(" ");
  k=1;
}
      }
      System.out.print("\n");
    }
  }
  
}
