package sample;
import java.util.*;
public class Forloop45
 {
  public static void main (String[] ar)
  {
   int i,j,fact=1,n,k=1;
   double sum=0,prod=1;
   System.out.println("enter no of term");
   Scanner m=new Scanner(System.in);
   n=m.nextInt();
   for(i=1;i<=n;i++)
   {
     fact=fact*i;
     System.out.print(i+"!"+"/");
    for(j=1;j<=i;j++)
    {
      System.out.print(k);
      if(j<i)
      {
        System.out.print("*");
      }
     prod=prod*k++;
    }
    sum=sum+fact/prod;
    prod=1;
    if(i<n)
    {
      System.out.print(" + ");
    }
   }
   System.out.print("sum of seriese="+sum);
  }
}
