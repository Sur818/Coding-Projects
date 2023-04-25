package sample;
import java.util.*;
class NestedForloop36
{
  public static void main (String[] ar)
  {
    int i,n,j,k;
    System.out.println("enter no of row");
    Scanner m=new Scanner(System.in);
    n=m.nextInt();
    if(n%2!=0)
    {
      
    for(i=1;i<=n/2+1;i++)
    {
      for(j=n/2+1;j>=i;j--)
      {
        System.out.print(" ");  
      }
      for(k=1;k<=i;k++)
    {
  System.out.print(k);

      }
      System.out.print("\n");
    }
    for(i=1;i<=(n/2+1)-1;i++)
    {
      for(j=1;j<=i+1;j++)
      {
        System.out.print(" ");
      }
      for(k=1;k<=n/2+1-i;k++)
      {  
        System.out.print(k);
        
      }
      System.out.print("\n");
  }
  }
  else
{
 
  for(i=1;i<=n/2;i++)
    {
      for(j=n/2;j>=i;j--)
      {
        System.out.print(" ");  
      }
      for(k=1;k<=i;k++)
      {
 System.out.print(k);

      }
      System.out.print("\n");
    }
    for(i=1;i<=(n/2);i++)
    {
      for(j=1;j<=i;j++)
      {
        System.out.print(" ");
      }
      for(k=(n/2);k>=i;k--)
      {
  System.out.print(k); 
     }
      
      System.out.print("\n");
    }
    }
  
}
  
}

