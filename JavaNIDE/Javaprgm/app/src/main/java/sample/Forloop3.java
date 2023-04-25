package sample;
import java.util.*;

 class Forloop3 
 {
   public static void main(String [] ar)
   {
     int n,i,j,sum=0,prod=1;
     System.out.println("enter no of term");
     Scanner m=new Scanner (System.in);
     n=m.nextInt();
     for(i=1;i<=n;i++)
     {
      for(j=1;j<=i;j++)
      {
       System.out.print(j);
       if(j<i)
       {
         System.out.print("*");
       }
      prod=prod*j;
      }
      System.out.print(" + ");
     sum=sum+prod;
     prod=1;
   }
   System.out.println("\n sum of ser="+sum);
  
  }
}
