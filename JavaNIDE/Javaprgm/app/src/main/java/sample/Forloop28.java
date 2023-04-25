package sample;
import java.util.*;
 class Forloop28
 {
  public static void main (String[] ar)
  {
   int n,i,prod=1;
   System.out.println("enter no");
   Scanner m=new Scanner(System.in);
   n=m.nextInt();
   for(i=1;i<=n;i++)
   {
     prod=prod*i;
   }
    System.out.println("factorial of given no="+prod);
  }
}
