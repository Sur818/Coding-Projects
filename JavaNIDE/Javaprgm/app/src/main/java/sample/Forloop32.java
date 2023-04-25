package sample;
import java.util.*;
class Forloop32
 {
   public static void main (String[] ar)
   {
     int i,j,sum=1,prod=1,fact=1,n;
     System.out.print("enter no of term");
     Scanner m=new Scanner (System.in);
     n=m.nextInt();
     System.out.print("1!+ ");
     for(i=1;i<=n-1;i++)
     {
       for(j=1;j<=i+1;j++)
       {
         fact=fact*j;
         prod=prod*fact;
        System.out.print(j+"!");
        if(j<i+1)
        {
          System.out.print("*");
        }
       }
       System.out.print("+ ");
       sum=sum+prod;
       prod=1;
       fact=1;
     }
     System.out.println("sum of seriese="+sum);
     
   }
  
}
