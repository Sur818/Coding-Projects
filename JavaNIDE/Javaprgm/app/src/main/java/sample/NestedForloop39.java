package sample;
import java.util.*;
 class NestedForloop39 
{
  public static void main(String[] ar)
  {
    int i,j,n,k;
    System.out.println("enter no of row");
    Scanner m=new Scanner (System.in);
    n=m.nextInt();
    for(i=1;i<=n;i++)
    {
     for(j=1;j<=i;j++)
     {
       System.out.print(j);
     }
     for(k=1;k<=(2*n-1)-2*i;k++)
     {
      System.out.print(" ");
     }
     if(i!=n)
     { 
     for(j=i;j>=1;j--)
     {
       System.out.print(j);
     }
     }
     else
{
  for(j=i-1;j>=1;j--)
  {
    System.out.print(j);
  }
}
     System.out.print("\n");
    }
    
  }
  
  
}
