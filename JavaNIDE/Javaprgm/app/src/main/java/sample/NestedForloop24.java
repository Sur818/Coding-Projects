package sample;
import java.util.*;
 class NestedForloop24
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
     for(j=1;j<=3;j++)
     {
      System.out.print(" ");
     }
     for(j=1;j<=n+1-i;j++)
     {
       System.out.print(j);
     }
     System.out.print("\n");
    }
  }
}
