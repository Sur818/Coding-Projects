package sample;
import java.util.*;
class NestedForloop19 
{
  public static void main (String[] ar)
  {
   int i,j,n,k;
   System.out.println("enter no of row");
   Scanner m=new Scanner(System.in);
   n=m.nextInt();
   for (i=1;i<=n;i++)
   {
    for(j=1;j<=i;j++)
    {
      System.out.print("*");
    }
    for(k=1;k<=2*(n-i)-1;k++)
    {
      System.out.print(" ");
    }
        if(i!=n)
      {
        for(k=1;k<=i;k++)   
    {
      System.out.print("*");
    }
    }
    else
{
 for(k=1;k<=i-1;k++)
 {
   System.out.print("*");
 }
}
    System.out.print("\n");
   }
  }
}

