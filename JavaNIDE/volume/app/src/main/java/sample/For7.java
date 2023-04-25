package sample;
import java.util.*;
 class For7 
 {
  static int i,j,fact=1,p,m,n,k=1;
  static float sum=0;
  public static void main(String[] ar)
  {
    Scanner p=new Scanner(System.in);
    System.out.print("enter no of term");
    n=p.nextInt();
    for(i=1;i<=n;i++)
    {
     for(j=1;j<=i;j++)
     {
       m=m+k;
      System.out.print(k++);
      if(j<i)
      {
       System.out.print("+");
      }
      fact=fact*j;
     }
     System.out.print("/"+i+"!");
     if(i<n)
     {
      System.out.print(" + ");
     }
     sum=sum+(float)m/fact;
     m=0;
     fact=1;
    }
    System.out.print("sum is "+sum);
   
  }
}
