package sample;
import java.util.*;
class NestedForloop42
 {
  
  public static void main (String[] ar)
  {
    int i,j,n,m,k;
    System.out.println("enter no of row");
    Scanner p=new Scanner (System.in);
    n=p.nextInt();
    System.out.println("enter no of collom");
    m=p.nextInt();
    for(i=1;i<=n;i++)
    {
      for(j=1;j<=m;j++)
      {
        if(i!=n)
        {
          
       if(j==(n+1)-i||j==(n-1)+i)
       {
 
         System.out.print("*");
       }
       else
{
  System.out.print(" ");
}
       }
       else
{
 for(k=1;k<=n;k++)
 {
   if(k%2!=0)
   {
     System.out.print("*");
   }
   else
{
  System.out.print(" ");
}
 }
}
      }
      System.out.printf("\n");
    }
    
  }
  
}
