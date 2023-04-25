package sample;
import java.util.*;

 class Forloop4
 {
   public static void main(String [] ar)
   {
     int n,i,j,sum=0,prod=1,k=1;
     System.out.println("enter no of term");
     Scanner m=new Scanner (System.in);
     n=m.nextInt();
     for(i=1;i<=n;i++)
     {
      for(j=1;j<=i;j++)
      {
       System.out.print(k);
       if(j<i)
       {
         System.out.print("*");
       }
      prod=prod*k++;;
      }
      System.out.print(" + ");
     sum=sum+prod;
     prod=1;
   }
   System.out.println("\n sum of ser="+sum);
  
  }
}
