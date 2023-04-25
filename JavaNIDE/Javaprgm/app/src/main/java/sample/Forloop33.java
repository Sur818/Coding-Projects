package sample;
import java.util.*;
class Forloop33
 {
   public static void main (String[] ar)
   {
     int i,j,sum=0,sum1=0,fact=1,n;
     System.out.println("enter no of term");
     Scanner m=new Scanner (System.in);
     n=m.nextInt();
     for(i=1;i<=n;i++)
     {
       for(j=1;j<=i;j++)
       {
         fact=fact*j;
         sum1=sum1+fact;
        System.out.print(j+"!");
        if(j<i)
        {
          System.out.print("+");
        }
       }
       if(i<n)
       {
         
       System.out.print("+ ");
       }
       sum=sum+sum1;
       sum1=0;
       fact=1;
     }
     System.out.println("sum of seriese="+sum);
     
   }
  
}
