package sample;
import java.util.*;
public class Forloop42
 {
   public static void main (String[] ar)
  {
   int i,n;
   double sum=0,z;
   System.out.print("enter no of term");
   Scanner m=new Scanner (System.in);
   n=m.nextInt();
  for(i=1;i<=n;i++)
  {
    System.out.print(i+"/"+(i)+"*"+(i+1));
    if(i<n)
    {
      System.out.print(" + ");
    }
    z=(i)*(i+1);
    sum=sum+i/z;
  }
  System.out.print("sum of seriese="+sum); 
  }
}
