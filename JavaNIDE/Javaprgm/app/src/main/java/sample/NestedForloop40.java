package sample;
import java.util.*;
 class NestedForloop40
{
  public static void main(String[] ar)
  {
    int i,j,n,z=1,k;
    System.out.println("enter odd no of row");
    Scanner m=new Scanner (System.in);
    n=m.nextInt();
    for(i=1;i<=n/2+1;i++)
    {
     for(j=1;j<=i;j++)
     {
       System.out.print(j);
     }
     for(k=1;k<=(2*(n/2+1)-1)-2*i;k++)
     {
      System.out.print(" ");
     }
     if(i!=n/2+1)
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
    for(i=n/2+1-1;i>=1;i--)
    {
      for(j=1;j<=i;j++)
      {
        System.out.print(j);
      }
      for(j=1;j<=z;j++)
      {
        System.out.print(" ");
      }
      z+=2;
      for(k=i;k>=1;k--)
      {
        System.out.print(k);
      }
      System.out.print("\n");
    }
    }
    
  
}

