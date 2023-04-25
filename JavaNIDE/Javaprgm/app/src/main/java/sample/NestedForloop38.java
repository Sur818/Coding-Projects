package sample;
import java.util.*;
 class NestedForloop38 
{
  public static void main (String[] ar)
  {
   int i,j,k,n;
   System.out.println("enter no of row");
   Scanner m=new Scanner (System.in);
   n=m.nextInt();
   for(i=1;i<=n;i++)
   {
     for(j=1;j<=n+1-i;j++)
     {
       System.out.print(j);
     }
     for(k=1;k<2*i-2;k++)
     {
      System.out.print(" ");
      }
      if(i==1)
{
     for(k=n-i;k>=1;k--)
     {
       System.out.print(k);
     }
   }
   else
{
  for(k=n+1-i;k>=1;k--)
     {
       System.out.print(k);
     }
  
}
 System.out.print("\n");
   }
   for(i=2;i<=n;i++)
   {
    for(j=1;j<=i;j++)
    {
      System.out.print(j);
    }
    for(k=1;k<=2*(n-i)-1;k++)
    {
      System.out.print(" ");
    }
        if(i!=n)
      {
        for(k=i;k>=1;k--)   
    {
      System.out.print(k);
    }
    }
    else
{
 for(k=i-1;k>=1;k--)
 {
   System.out.print(k);
 }
}
    System.out.print("\n");
   }
  }
}


