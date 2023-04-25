package sample;
import java.util.*;
class NestedForloop14
 {
  public static void main (String[] ar)
  {
    
    int i,j,n,m,p=1;
    System.out.println("enter no of row");
    Scanner z=new Scanner(System.in);
    n=z.nextInt();
    System.out.println("enter no of collom");
    m=z.nextInt();
    for(i=1;i<=n;i++)
    {
      for(j=1;j<=m;j++)
      {
        if(j>=(n+1)-i&&j<=(n-1)+i)
        {
         if(p<=9)
         {
           
         System.out.print(" "+p++);
         }
         else
         {
          System.out.print(p++);
         }
             }
             else
            {
            System.out.print(" ");
            }
    }
      System.out.print("\n");
  }
  }
}
